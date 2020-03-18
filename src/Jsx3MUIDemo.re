open ReasonReact;
open MaterialUI;
open MaterialUIDataType;

module False_or_choice {
  [@unboxed]
  type t = | Any('a): t;

  [@bs.deriving jsConverter]
  type choices = [
    | `active 
    | `inactive
  ];

  let bool = (v: bool) => Any(v);
  let false_ = Any(false);
  let choices = (v: choices) => Any(choicesToJs(v));
};

let root = Js.Dict.empty();
root->Js.Dict.set("key1", False_or_choice.false_);
root->Js.Dict.set("key2", False_or_choice.choices(`active));
Js.log(root);

let style = ReactDOMRe.Style.make(
  ~background="linear-gradient(45deg, #FE6B8B 30%, #FF8E53 90%)", 
  ~border="0px", 
  ~borderRadius="3px",
  ~boxShadow="0 3px 5px 2px rgba(255, 105, 135, .3)",
  ~color="purple",
  ~height="64px",
  ~padding="0 30px",
  ()
  );

let styleObj = Js.Dict.empty();
styleObj->Js.Dict.set("root", style);

[@react.component]
let make = () => {
  
  let madeStyle = makeStyles(styleObj);
  let classes = madeStyle(. 0);

  let (menuRef, setMenuRef) = React.useState(()=>Js.Nullable.null);
  let (menuOpen, setMenuOpen) = React.useState(() => false);

  let menuButton = <ClickAwayListener onClickAway={_=>setMenuRef(_=>Js.Nullable.null)}>
        <Button onClick={evt=>{
          setMenuRef(_=>Js.Nullable.return(ReactEvent.Synthetic.target(evt)))
        }}>
          {string("Open menu dropdown")}
        </Button>
    </ClickAwayListener>;

  <StylesProvider injectFirst=true>
  <div>(string("Jsx3"))</div>
  <Container id="container-id" className={classes->Js.Dict.unsafeGet("root")}>
     <Container id="container-button">
      <FormLabel> {string("Button")} </FormLabel>
      <Button> {string("Button")} </Button>
      <Button size=Size.large> {string("Large Button")} </Button>
      <Button size=Size.medium> {string("Medium Button")} </Button>
      <Button size=Size.small> {string("Small Button")} </Button>
    </Container>
    <Container>
      <ButtonBase>{string("Base Button")}</ButtonBase>
    </Container>
    <Container id="container-radio">
      <FormLabel> {string("Radio")} </FormLabel>
      <Radio />
    </Container>
    <Container id="container-radio-group">
      <FormLabel> {string("Radio Group")} </FormLabel>
      <RadioGroup name="radio-group">
        <FormControlLabel control={<Radio />} label="Default" />
        <FormControlLabel control={<Radio disabled=true />} label="Disabled" />
        <FormControlLabel
          control={<Radio size=Size.medium />}
          label="Medium"
        />
        <FormControlLabel control={<Radio size=Size.small />} label="Small" />
      </RadioGroup>      
    </Container>

     <Dialog
         _open=false
       >
         <DialogTitle id="alert-dialog-title">{string("Use Google's location service?")}</DialogTitle>
         <DialogContent>
           <DialogContentText id="alert-dialog-description">
             {string("Let Google help apps determine location. This means sending anonymous location data to
             Google, even when no apps are running.")}
           </DialogContentText>
         </DialogContent>
         <DialogActions>
           <Button color="primary">
             {string("Disagree")}
           </Button>
           <Button color="primary">
             {string("Agree")}
           </Button>
         </DialogActions>
       </Dialog>
    <Container id="container-alert">
      <Alert severity="error">
        <AlertTitle>{string("Warning")}</AlertTitle>
        {string("This is an error alert")}
      </Alert>
    </Container>

     <Autocomplete
      autoComplete=true
      options= [
        { "title": "The Shawshank Redemption", "year": 1994 },
        { "title": "The Godfathe", "year": 1972 },
        { "title": "The Dark Knight", "year": 2008 }]
      renderInput = {params => <TextField label="Combo box" variant=Variant.outlined />}
    ></Autocomplete>
    <AvatarGroup>
      <Avatar alt="Remy Sharp" src="https://www.w3schools.com/howto/img_avatar2.png" />
      <Avatar alt="Travis Howard" src="https://www.w3schools.com/howto/img_avatar2.png" />
      <Avatar alt="Cindy Baker" src="https://www.w3schools.com/howto/img_avatar2.png" />
    </AvatarGroup>

    <ExpansionPanel>
      <ExpansionPanelSummary
      >
        <Typography>{string("Expansion Panel 1")}</Typography>
      </ExpansionPanelSummary>
      <ExpansionPanelDetails>
        <Typography>
          {string("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse malesuada lacus ex,
          sit amet blandit leo lobortis eget.")}
        </Typography>
      </ExpansionPanelDetails>
      <ExpansionPanelActions>
          <Button size="small">{string("Cancel")}</Button>
          <Button size="small" color="primary">
            {string("Save")}
          </Button>
        </ExpansionPanelActions>
    </ExpansionPanel>

    <Fab>
      <Icon.Notifications className="extendedIcon" />
      {string("Notification")}
    </Fab>

    <FormControl variant=Variant.filled>
      <FilledInput
        id="filled-adornment-weight"
        value="weight"
        endAdornment={<InputAdornment position="end">{string("Kg")}</InputAdornment>}
        inputProps={
          "aria-label": "weight"
        }
      />
      <FormHelperText>{string("Weight")}</FormHelperText>
    </FormControl>

    <AppBar position="static">
      <Toolbar>
        <IconButton edge="start" color="inherit" >
        </IconButton>
        <Typography variant=Typography.Variant.h6>
          {string("News")}
        </Typography>
      </Toolbar>
    </AppBar> 
    <Backdrop _open=false>
      <CircularProgress color="inherit" />
    </Backdrop>
    
    <Box component="span" m={1}>
      <Button>{string("Large Button")}</Button>
    </Box>

    <Grid container=true spacing={3}>
      <Divider orientation="vertical" flexItem=true />
      <Grid item=true xs=GridSize.size(12)>
        <Paper >{string("xs=12")}</Paper>
      </Grid>
      <Divider orientation="vertical" flexItem=true />
      <Grid item=true xs=GridSize.size(6)>
        <Paper >{string("xs=6")}</Paper>
      </Grid>
      <Grid item=true xs=GridSize.size(6)>
        <Paper >{string("xs=6")}</Paper>
      </Grid>
    </Grid>

    <Checkbox
        checked=true
        value="primary"
        inputProps={ "aria-label": "primary checkbox" }
      />

    <Card>
      <CardHeader 
            avatar={<Avatar alt="Remy Sharp" src="https://www.w3schools.com/howto/img_avatar2.png" />}
            action=
            {<IconButton>
              <Icon.RestoreIcon />
            </IconButton>}
            title="Shrimp and Chorizo Paella"
            subheader="September 14, 2016"
          />
      <CardActionArea>
        <CardMedia
          component="img"
          image="https://animals.sandiegozoo.org/sites/default/files/2016-11/animals_hero_lizards.jpg"
        />
        <Collapse in_=true timeout="auto">
          <CardContent>
            <Typography variant=Typography.Variant.h5 component="h2">
              {string("Lizard")}
            </Typography>
            <Typography variant=Typography.Variant.body2 color="textSecondary" component="p">
              {string("Lizards are a widespread group of squamate reptiles, with over 6,000 species, ranging
              across all continents except Antarctica")}
            </Typography>
          </CardContent>
        </Collapse>
      </CardActionArea>
      <CardActions>
        <Button size="small" color="primary">
          {string("Share")}
        </Button>
        <Button size="small" color="primary">
          {string("Learn More")}
        </Button>
      </CardActions>
    </Card>

    <Badge badgeContent={4} color="error" />

    <BottomNavigation showLabels=true component="div">
      <BottomNavigationAction  label="Recents" icon={<Icon.RestoreIcon />} />
      <BottomNavigationAction  label="Favorites" icon={<Icon.FavoriteIcon />}  />
    </BottomNavigation>

     <Breadcrumbs>
      <Link color="inherit" href="/">
        {string("Material-UI")}
      </Link>
      <Link color="inherit" href="/getting-started/installation/">
        {string("Core")}
      </Link>
      <Typography color="textPrimary">{string("Breadcrumb")}</Typography>
    </Breadcrumbs>

    <ButtonGroup variant=Button.Variant.contained color="primary">
      <Button>{string("One")}</Button>
      <Button>{string("Two")}</Button>
      <Button>{string("Three")}</Button>
    </ButtonGroup>

    
    menuButton

    <Chip label="Basic" />

     <React.Fragment>
      <CssBaseline />
    </React.Fragment>

    <Drawer _open=false>
      <Typography>
        {string("Test Drawer")}
      </Typography>
    </Drawer>
    
    <Hidden xsUp=false>
      <Paper>{string("xsUp")}</Paper>
    </Hidden>

    <Icon className="fa fa-plus-circle" color="primary">{string("add_circle")}</Icon>

    <Menu
      anchorEl=menuRef
      _open=(!Js.Nullable.isNullable(menuRef))
    >
      <MenuItem>{string("Profile")}</MenuItem>
      <MenuItem>{string("My account")}</MenuItem>
      <MenuItem>{string("Logout")}</MenuItem>
    </Menu>

    <Modal
      _open=false
    >
        <Typography>{string("Server-side modal")}</Typography>
    </Modal>

    <NoSsr>
      <Box p={2} bgcolor="secondary.main" color="primary.contrastText">
        {string("Client only")}
      </Box>
    </NoSsr>

    <Pagination count={10} />

    <Popover
        _open=false
        anchorOrigin={{
          "vertical": "bottom",
          "horizontal": "center",
        }}
        transformOrigin={{
          "vertical": "top",
          "horizontal": "center",
        }}
        // anchorEl= {_=>Js.log("Test Popover")}
    >
      <Typography>{string("The content of the Popover.")}</Typography>
    </Popover>

    <Popper 
      _open=true transition=true>
        {transitionProp => 
        <Fade timeout={"350"}>
          <Typography>{string("The content of the Popper.")}</Typography>
        </Fade>}
    </Popper>

    <Portal>
      <Typography>{string("The content of the Popper.")}</Typography>
    </Portal>

    <Radio
        value="a"
        name="radio-button-demo"
      />

    <Box component="fieldset">
        <Typography component="legend">{string("Controlled")}</Typography>
        <Rating
        name="test rating"
        disabled=false
        value={12}
      />
      </Box>

    <Skeleton variant=Skeleton.Variant.text />
    <Skeleton variant=Skeleton.Variant.circle width="40" height="40" />
    <Skeleton variant=Skeleton.Variant.rect width="210" height="118" />
    
    <Slider
        defaultValue={30}
        aria_labelledby="discrete-slider"
        valueLabelDisplay="auto"
        step={10}
        min={10}
        max={110}
      />

    <Snackbar
        anchorOrigin={{
          "vertical": "bottom",
          "horizontal": "left",
        }}
        _open=true
        autoHideDuration={6000}
        message="Note archived"
      />

    <SnackbarContent message="I love snacks." />

    <SpeedDial
        ariaLabel="SpeedDial openIcon example"
        hidden=false
        icon={<SpeedDialIcon openIcon={<Icon.FavoriteIcon />} />}
        _open=true
      >
      </SpeedDial>

    <SpeedDialAction
      icon={<SpeedDialIcon openIcon={<Icon.FavoriteIcon />} />}
      tooltipTitle={<div>{string("Test Speed Action")}</div>}
      tooltipOpen=true
    />

    <Stepper activeStep={10} alternativeLabel=true>
        <Step>
          <StepLabel>{string("Test Step Label")}</StepLabel>
        </Step>
    </Stepper>

    <SvgIcon>
      <path d="M10 20v-6h4v6h5v-8h3L12 3 2 12h3v8z" />
    </SvgIcon>

    <SwipeableDrawer 
      onClose={_=>Js.log("on close")}
      onOpen={_=>Js.log("on open")}
      _open=false
      disableBackdropTransition=true 
      disableDiscovery=true />

    <Switch
      checked=true
      value="checkedB"
      color="primary"
    />

    <Tabs value=false>
      <Tab label="Item One" />
      <Tab label="Item Two" />
      <Tab label="Item Three" />
    </Tabs>

    <TableContainer>
      <Table>
        <TableBody>          
            <TableRow>
              <TableCell scope="row">
                {string("name")}
              </TableCell>
              <TableCell align="right">{string("category")}</TableCell>
              <TableCell align="right">{string("fat")}</TableCell>
            </TableRow>
            <TableRow>
              <TableCell />
            </TableRow>
        </TableBody>
        <TableFooter>
          <TableRow>
            <TablePagination
              count={10}
              rowsPerPage={2}
              page={2}
              onChangePage={(_,_)=>Js.log("on change page")}
            />
          </TableRow>
        </TableFooter>
      </Table>
    </TableContainer>

      <TextareaAutosize rowsMax="3" />

      <ToggleButtonGroup
          onChange={_=>Js.log("toggle button")}
        >
        <ToggleButton value="left" >
          <Icon.FavoriteIcon />
        </ToggleButton>
        <ToggleButton value="center" >
          <Icon.FavoriteIcon />
        </ToggleButton>
        <ToggleButton value="right" >
          <Icon.FavoriteIcon />
        </ToggleButton>
        <ToggleButton value="justify">
          <Icon.FavoriteIcon />
        </ToggleButton>
      </ToggleButtonGroup>

      <Tooltip title="Delete">
        <IconButton edge="start" color="inherit">
          <Icon.RestoreIcon />
        </IconButton>
      </Tooltip>

    <TreeView>
    <TreeItem nodeId="1" label="Applications">
      <TreeItem nodeId="2" label="Calendar" />
      <TreeItem nodeId="3" label="Chrome" />
      <TreeItem nodeId="4" label="Webstorm" />
      </TreeItem>
      <TreeItem nodeId="5" label="Documents">
        <TreeItem nodeId="10" label="OSS" />
        <TreeItem nodeId="6" label="Material-UI">
          <TreeItem nodeId="7" label="src">
            <TreeItem nodeId="8" label="index.js" />
            <TreeItem nodeId="9" label="tree-view.js" />
          </TreeItem>
        </TreeItem>
      </TreeItem>
    </TreeView>

    <Zoom _in=true>
      <Paper elevation={4} >
        <svg>
          <polygon points="0,100 50,00, 100,100" />
        </svg>
      </Paper>
    </Zoom>

  </Container>

  <Container>
    <FormControl variant=Variant.outlined>
      <InputLabel id="demo-simple-select-outlined-label">
        (string("Age"))
      </InputLabel>
      <Select
        labelId="demo-simple-select-outlined-label"
        id="demo-simple-select-outlined"
        value=10
      >
        <MenuItem value="">
          <em>(string("None"))</em>
        </MenuItem>
        <MenuItem value=10>(string("Ten"))</MenuItem>
        <MenuItem value=20>(string("Twenty"))</MenuItem>
        <MenuItem value=30>(string("Thirty"))</MenuItem>
      </Select>
    </FormControl>
  </Container>
  </StylesProvider>
  ;
};