cmd_/home/admin/r8168/src/Module.symvers := sed 's/\.ko$$/\.o/' /home/admin/r8168/src/modules.order | scripts/mod/modpost -m -a  -o /home/admin/r8168/src/Module.symvers -e -i Module.symvers   -T -
