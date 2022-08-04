cmd_/home/admin/r8168/src/modules.order := {   echo /home/admin/r8168/src/r8168.ko; :; } | awk '!x[$$0]++' - > /home/admin/r8168/src/modules.order
