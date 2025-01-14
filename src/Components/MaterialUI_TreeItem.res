@react.component @module("@material-ui/lab/TreeItem")
external make: (
  ~id: string=?,
  ~className: string=?,
  ~children: React.element=?,
  ~classes: string=?,
  ~collapseIcon: React.element=?,
  ~endIcon: React.element=?,
  ~expandIcon: React.element=?,
  ~icon: React.element=?,
  ~label: string=?,
  ~nodeId: string,
  ~transitionComponent: string=?,
  ~transitionProps: Js.t<'a>=?,
) => React.element = "default"
