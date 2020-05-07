open ReasonReact;
open MaterialUI;
open MaterialUIDataType;

[@react.component]
let make = () => {
  let mainInfo = "The ButtonGroup component can be used to group related buttons.";
  let demoCode = 
  <Jsx3LayoutComponent title="Button Group" mainInfo>  
    <ButtonGroup variant=Button.Variant.contained color="primary">
      <Button>{string("One")}</Button>
      <Button>{string("Two")}</Button>
      <Button>{string("Three")}</Button>
    </ButtonGroup>
  </Jsx3LayoutComponent>;

  let demoCodeString = 
  "<Jsx3LayoutComponent title='Button Group' mainInfo>  
    <ButtonGroup variant=Button.Variant.contained color='primary'>
      <Button>{string('One')}</Button>
      <Button>{string('Two')}</Button>
      <Button>{string('Three')}</Button>
    </ButtonGroup>
  </Jsx3LayoutComponent>";
  
  <>
  demoCode
  <blockquote>
    <pre>
      <code>
      {ReasonReact.string(demoCodeString)}
      </code>
    </pre>
  </blockquote>
  </>;
};