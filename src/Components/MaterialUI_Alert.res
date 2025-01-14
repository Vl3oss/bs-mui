open MaterialUIDataType

module Variant = MaterialUIDataType.Variant

@react.component @module("@material-ui/lab/Alert")
external make: (
  ~id: string=?,
  ~className: string=?,
  ~action: React.element=?,
  ~children: React.element=?,
  ~classes: string=?,
  ~color: Color.t=?,
  ~closeText: string=?,
  ~icon: React.element=?,
  ~iconMapping: Js.t<'a>=?,
  ~onClose: unit => unit=?,
  ~role: string=?,
  ~severity: string=?,
  ~variant: Variant.t=?,
) => React.element = "default"

module Title = {
  @react.component @module("@material-ui/lab/AlertTitle")
  external make: (
    ~id: string=?,
    ~className: string=?,
    ~children: React.element=?,
    ~classes: string=?,
  ) => React.element = "default"
}
