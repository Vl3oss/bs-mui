open MaterialUIDataType;

module DataType = MaterialUIDataType;

[@bs.module "@material-ui/core/styles"]
external createStyles: Js.Dict.t('a) => Js.Dict.t(string) = "createStyles";

[@bs.module "@material-ui/core/styles"]
external makeStyles: Js.Dict.t('a) => ((. 'props) => Js.Dict.t(string)) =
  "makeStyles";

module StylesProvider = {

  [@react.component] [@bs.module "@material-ui/core/styles"]
  external make:
    (
      ~injectFirst: bool=?,
      ~children: React.element
    ) =>
    React.element = "StylesProvider";
}


module Alert = MaterialUI_Alert;
module AlertTitle = MaterialUI_Alert.Title;
module AppBar = MaterialUI_AppBar;
module Autocomplete = MaterialUI_Autocomplete;
module Avatar = MaterialUI_Avatar;
module AvatarGroup = MaterialUI_Avatar.AvatarGroup;
module Backdrop = MaterialUI_Backdrop;
module Badge = MaterialUI_Badge;
module BottomNavigation = MaterialUI_BottomNavigation;
module BottomNavigationAction = MaterialUI_BottomNavigation.BottomNavigationAction;
module Box = MaterialUI_Box;
module Breadcrumbs = MaterialUI_Breadcrumbs;
module Button = MaterialUI_Button;
module ButtonBase = MaterialUI_Button.ButtonBase;
module ButtonGroup = MaterialUI_Button.ButtonGroup;
module Card = MaterialUI_Card;
module CardActionArea = MaterialUI_Card.CardActionArea;
module CardActions = MaterialUI_Card.CardActions;
module CardContent = MaterialUI_Card.CardContent;
module CardHeader = MaterialUI_Card.CardHeader;
module CardMedia = MaterialUI_Card.CardMedia;
module Checkbox = MaterialUI_Checkbox;
module Chip = MaterialUI_Chip;
module CircularProgress = MaterialUI_CircularProgress;
module ClickAwayListener = MaterialUI_ClickAwayListener;
module Collapse = MaterialUI_Collapse;
module Container = MaterialUI_Container;
module CssBaseline = MaterialUI_CssBaseline;
module DateTimePicker = MaterialUI_DateTimePicker;
module DatePicker = MaterialUI_DatePicker;
module Dialog = MaterialUI_Dialog;
module DialogActions = MaterialUI_Dialog.DialogActions;
module DialogContent = MaterialUI_Dialog.DialogContent;
module DialogContentText = MaterialUI_Dialog.DialogContentText;
module DialogTitle = MaterialUI_Dialog.DialogTitle;
module Divider = MaterialUI_Divider;
module Drawer = MaterialUI_Drawer;
module ExpansionPanel = MaterialUI_ExpansionPanel;
module ExpansionPanelActions = MaterialUI_ExpansionPanel.ExpansionPanelActions;
module ExpansionPanelDetails = MaterialUI_ExpansionPanel.ExpansionPanelDetails;
module ExpansionPanelSummary = MaterialUI_ExpansionPanel.ExpansionPanelSummary;
module Fab = MaterialUI_Fab;
module Fade = MaterialUI_Fade;
module FilledInput = MaterialUI_FilledInput;
module FormControl = MaterialUI_FormControl;
module FormControlLabel = MaterialUI_FormControl.FormControlLabel;
module FormGroup = MaterialUI_FormControl.FormGroup;
module FormHelperText = MaterialUI_FormControl.FormHelperText;
module FormLabel = MaterialUI_FormControl.FormLabel;
module Grid = MaterialUI_Grid;
module GridList = MaterialUI_Grid.GridList;
module GridListTitle = MaterialUI_Grid.GridListTitle;
module GridListTitleBar = MaterialUI_Grid.GridListTitleBar;
module Grow = MaterialUI_Grow;
module Hidden = MaterialUI_Hidden;
module Icon = MaterialUI_Icon;
module IconButton = MaterialUI_Icon.IconButton;
module Input = MaterialUI_Input;
module InputAdornment = MaterialUI_Input.InputAdornment;
module InputBase = MaterialUI_Input.InputBase;
module InputLabel = MaterialUI_Input.InputLabel;
module LinearProgress = MaterialUI_LinearProgress;
module ListItem = MaterialUI_ListItem;
module UIList = MaterialUI_ListItem.UIList;
module ListItemAvatar = MaterialUI_ListItem.ListItemAvatar;
module ListItemIcon = MaterialUI_ListItem.ListItemIcon;
module ListItemSecondaryAction = MaterialUI_ListItem.ListItemSecondaryAction;
module ListItemText = MaterialUI_ListItem.ListItemText;
module ListSubheader = MaterialUI_ListItem.ListSubheader;
module Menu = MaterialUI_Menu;
module MenuItem = MaterialUI_Menu.MenuItem;
module MenuList = MaterialUI_Menu.MenuList;
module MobileStepper = MaterialUI_MobileStepper;
module Modal = MaterialUI_Modal;
module NativeSelect = MaterialUI_NativeSelect;
module NoSsr = MaterialUI_NoSsr;
module OutlinedInput = MaterialUI_OutlinedInput;
module Pagination = MaterialUI_Pagination;
module PaginationItem = MaterialUI_Pagination.PaginationItem;
module Paper = MaterialUI_Paper;
module Picker = MaterialUI_Picker;
module Popover = MaterialUI_Popover;
module Popper = MaterialUI_Popper;
module Portal = MaterialUI_Portal;
module Radio = MaterialUI_Radio;
module RadioGroup = MaterialUI_Radio.RadioGroup;
module Rating = MaterialUI_Rating;
module RootRef = MaterialUI_RootRef;
module ScopedCssBaseline = MaterialUI_ScopedCssBaseline;
module Select = MaterialUI_Select;
module Skeleton = MaterialUI_Skeleton;
module Slide = MaterialUI_Slide;
module Slider = MaterialUI_Slider;
module Snackbar = MaterialUI_Snackbar;
module SnackbarContent = MaterialUI_Snackbar.SnackbarContent;
module SpeedDial = MaterialUI_SpeedDial;
module SpeedDialAction = MaterialUI_SpeedDial.SpeedDialAction;
module SpeedDialIcon = MaterialUI_SpeedDial.SpeedDialIcon;
module Step = MaterialUI_Step;
module StepButton = MaterialUI_Step.StepButton;
module StepConnector = MaterialUI_Step.StepConnector;
module StepContent = MaterialUI_Step.StepContent;
module StepIcon = MaterialUI_Step.StepIcon;
module StepLabel = MaterialUI_Step.StepLabel;
module Stepper = MaterialUI_Stepper;
module SvgIcon = MaterialUI_SvgIcon;
module SwipeableDrawer = MaterialUI_SwipeableDrawer;
module Switch = MaterialUI_Switch;
module Tab = MaterialUI_Tab;
module Table = MaterialUI_Table;
module TableBody = MaterialUI_Table.TableBody;
module TableCell = MaterialUI_Table.TableCell;
module TableContainer = MaterialUI_Table.TableContainer;
module TableFooter = MaterialUI_Table.TableFooter;
module TableHead = MaterialUI_Table.TableHead;
module TablePagination = MaterialUI_Table.TablePagination;
module TableRow = MaterialUI_Table.TableRow;
module TableSortLabel = MaterialUI_Table.TableSortLabel;
module Tabs = MaterialUI_Tabs;
module TextareaAutosize = MaterialUI_TextareaAutosize;
module TextField = MaterialUI_TextField;
module TimePicker = MaterialUI_TimePicker;
module ToggleButton = MaterialUI_ToggleButton;
module ToggleButtonGroup = MaterialUI_ToggleButton.ToggleButtonGroup;
module Toolbar = MaterialUI_Toolbar;
module Tooltip = MaterialUI_Tooltip;
module TreeItem = MaterialUI_TreeItem;
module TreeView = MaterialUI_TreeView;
module Typography = MaterialUI_Typography;
module Link = MaterialUI_Link;
module Zoom = MaterialUI_Zoom;