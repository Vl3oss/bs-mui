open MaterialUI;
open MaterialUI.DataType;

[@bs.get_index] external get: ('a, string) => 'b = "";

[@react.component]
let make = () => {
  let mainInfo = "DateTimePicker Demo";
  let (selectedDateTime, handleDateTimeChange) = React.useState(() => Js.Date.make());

  <Jsx3LayoutComponent title="DateTimePicker" mainInfo> 
    <> 
    <Container id="datetimepicker-field">
        <Grid.Item xs=GridSize.size(12)>
            <Picker.UtilsProvider utils=Picker.moment>
                <DateTimePicker 
                onChange={newDateTime=>handleDateTimeChange(_oldDateTime => newDateTime)} 
                value=selectedDateTime
                format="DD-MM-YYYY HH:mm"
                showTodayButton=true
                views=[|MaterialUI_DateTimePicker.DateView.date|]
                orientation="portrait"
                />
            </Picker.UtilsProvider>
        </Grid.Item>
    </Container>    
    </>
  </Jsx3LayoutComponent>;
};