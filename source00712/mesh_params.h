! Proc   2: Header for mesh information to run static solver
! created by the mesher on 05/17/2018, at 17h 22min
 
!:::::::::::::::::::: Input parameters :::::::::::::::::::::::::::
!   Background model     :            prem_iso
!   Dominant period [s]  :   20.0000
!   Elements/wavelength  :    1.5000
!   Courant number       :    0.6000
!   Coarsening levels    :         3
!:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
 
 integer, parameter ::         npol =         4  !            polynomial order
 integer, parameter ::        nelem =     13720  !                   proc. els
 integer, parameter ::       npoint =    343000  !               proc. all pts
 integer, parameter ::    nel_solid =     11592  !             proc. solid els
 integer, parameter ::    nel_fluid =      2128  !             proc. fluid els
 integer, parameter :: npoint_solid =    289800  !             proc. solid pts
 integer, parameter :: npoint_fluid =     53200  !             proc. fluid pts
 integer, parameter ::  nglob_fluid =     34501  !            proc. flocal pts
 integer, parameter ::     nel_bdry =       168  ! proc. solid-fluid bndry els
 integer, parameter ::        ndisc =        11  !   # disconts in bkgrd model
 integer, parameter ::   nproc_mesh =         2  !        number of processors
 integer, parameter :: lfbkgrdmodel =         8  !   length of bkgrdmodel name
 
!:::::::::::::::::::: Output parameters ::::::::::::::::::::::::::
!   Time step [s]        :    0.1432
!   Min(h/vp),dt/courant :    0.8050    0.9548
!   max(h/vs),T0/wvlngth :   13.2328   13.3333
!   Inner core r_min [km]: 1034.8953
!   Max(h) r/ns(icb) [km]:   34.2630
!   Max(h) precalc.  [km]:   35.6860
!:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
 
