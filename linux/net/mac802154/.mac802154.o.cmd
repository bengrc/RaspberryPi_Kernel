cmd_net/mac802154/mac802154.o := arm-linux-gnueabihf-ld  -EL    -r -o net/mac802154/mac802154.o net/mac802154/main.o net/mac802154/rx.o net/mac802154/tx.o net/mac802154/mac_cmd.o net/mac802154/mib.o net/mac802154/iface.o net/mac802154/llsec.o net/mac802154/util.o net/mac802154/cfg.o net/mac802154/trace.o 
