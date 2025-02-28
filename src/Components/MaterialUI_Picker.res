type dateTimeParser

@module("@date-io/moment") external es6Moment: option<dateTimeParser> = "default"
@module external commonjsMoment: dateTimeParser = "@date-io/moment"

let moment = switch es6Moment {
| Some(moment) => moment
| None => commonjsMoment
}

@module("@date-io/date-fns") external es6DateFns: option<dateTimeParser> = "default"
@module external commonjsDateFns: dateTimeParser = "@date-io/date-fns"
let dateFns = switch es6DateFns {
| Some(dateFns) => dateFns
| None => commonjsDateFns
}

module UtilsProvider = {
  @react.component @module("@material-ui/pickers")
  external make: (
    ~id: string=?,
    ~className: string=?,
    ~utils: dateTimeParser,
    ~children: React.element,
  ) => React.element = "MuiPickersUtilsProvider"
}
