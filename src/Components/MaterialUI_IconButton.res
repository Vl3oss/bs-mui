module Color: {
  type t
  let default: t
  let inherit_: t
  let primary: t
  let secondary: t
} = {
  type t = string
  let default = "default"
  let inherit_ = "inherit"
  let primary = "primary"
  let secondary = "secondary"
}

module Edge: {
  type t
  let start: t
  let end_: t
  let false_: t
} = {
  @unboxed
  type rec t = Any('a): t

  let start = Any("start")
  let end_ = Any("end")
  let false_ = Any(false)
}

module Size: {
  type t
  let small: t
  let medium: t
} = {
  type t = string

  let small = "small"
  let medium = "medium"
}

@react.component @module("@material-ui/core/IconButton")
external make: (
  ~id: string=?,
  ~edge: Edge.t=?,
  ~color: Color.t=?,
  ~size: Size.t=?,
  ~className: string=?,
  ~onClick: ReactEvent.Synthetic.t => unit=?,
  ~disabled: bool=?,
  ~disableFocusRipple: bool=?,
  ~disableRipple: bool=?,
  ~children: React.element=?,
) => React.element = "default"
