// Function: FUN_1400b5890
// Addr: 1400b5890
// Size: 521 bytes


char * FUN_1400b5890(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if ((param_4 & 1) == 0) {
    if ((param_4 & 2) == 0) {
      FUN_1404217a0(param_1,0,0xa3e0);
      param_4 = param_4 | 1;
    }
    else {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
  }
  else if (*param_1 != 0) {
    return "#base: initialize falsely claimed already zeroed";
  }
  piVar1 = param_1 + 0x10;
  if (piVar1 != (int *)0x0) {
    pcVar3 = (char *)0x0;
    if ((param_4 & 1) == 0) {
      param_1[0x11] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
    }
    else if (*piVar1 != 0) {
      return "#base: initialize falsely claimed already zeroed";
    }
    *piVar1 = 0x3ccb6c71;
    piVar1 = param_1 + 0x1e;
    *(code **)(param_1 + 0x1c) = FUN_1400a3770;
    *(char **)(param_1 + 0x12) = "{vtable}wuffs_base__hasher_u32";
    *(undefined ***)(param_1 + 0x14) = &PTR_FUN_14047f370;
    if (piVar1 != (int *)0x0) {
      if ((param_4 & 1) == 0) {
        param_1[0x1f] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
      }
      else if (*piVar1 != 0) {
        return "#base: initialize falsely claimed already zeroed";
      }
      piVar2 = param_1 + 0x2c;
      *(code **)(param_1 + 0x2a) = FUN_1400a3770;
      *piVar1 = 0x3ccb6c71;
      *(char **)(param_1 + 0x20) = "{vtable}wuffs_base__hasher_u32";
      *(undefined ***)(param_1 + 0x22) = &PTR_FUN_14047f370;
      if (piVar2 == (int *)0x0) {
        pcVar3 = "#base: bad receiver";
      }
      else {
        if ((param_4 & 1) == 0) {
          if ((param_4 & 2) == 0) {
            FUN_1404217a0(piVar2,0,0xa320);
          }
          else {
            piVar2[0] = 0;
            piVar2[1] = 0;
            param_1[0x2e] = 0;
            param_1[0x2f] = 0;
            param_1[0x30] = 0;
            param_1[0x31] = 0;
            param_1[0x32] = 0;
            param_1[0x33] = 0;
            param_1[0x34] = 0;
            param_1[0x35] = 0;
            param_1[0x36] = 0;
            param_1[0x37] = 0;
            param_1[0x38] = 0;
            param_1[0x39] = 0;
            param_1[0x3a] = 0;
            param_1[0x3b] = 0;
            param_1[0x3c] = 0;
            param_1[0x3d] = 0;
            param_1[0x3e] = 0;
            param_1[0x3f] = 0;
            param_1[0x40] = 0;
            param_1[0x41] = 0;
            param_1[0x42] = 0;
            param_1[0x43] = 0;
            param_1[0x44] = 0;
            param_1[0x45] = 0;
            param_1[0x46] = 0;
            param_1[0x47] = 0;
          }
        }
        else if (*piVar2 != 0) {
          return "#base: initialize falsely claimed already zeroed";
        }
        *piVar2 = 0x3ccb6c71;
        *(code **)(param_1 + 0x44) = FUN_1400ac690;
        *(char **)(param_1 + 0x2e) = "{vtable}wuffs_base__io_transformer";
        *(undefined ***)(param_1 + 0x30) = &PTR_FUN_14047a5f0;
        *(undefined ***)(param_1 + 4) = &PTR_LAB_140479ab8;
        *param_1 = 0x3ccb6c71;
        *(char **)(param_1 + 2) = "{vtable}wuffs_base__io_transformer";
      }
      return pcVar3;
    }
  }
  return "#base: bad receiver";
}

