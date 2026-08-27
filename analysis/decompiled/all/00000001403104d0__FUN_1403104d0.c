// Function: FUN_1403104d0
// Addr: 1403104d0
// Size: 819 bytes


longlong FUN_1403104d0(longlong param_1,uint param_2)

{
  if (param_2 < 0x73627870) {
    if (param_2 == 0x7362786f) {
      return param_1 + 0x216;
    }
    if (param_2 < 0x67737031) {
      if (param_2 == 0x67737030) {
        if (0 < (int)(*(ushort *)(param_1 + 0x302) - 1)) {
          return *(longlong *)(param_1 + 0x308);
        }
      }
      else if (param_2 == 0x63706874) {
        return param_1 + 0x262;
      }
    }
    else if (param_2 < 0x68617364) {
      if (param_2 == 0x68617363) {
        return param_1 + 0x24e;
      }
      switch(param_2) {
      case 0x67737031:
        if (1 < (int)(*(ushort *)(param_1 + 0x302) - 1)) {
          return *(longlong *)(param_1 + 0x308) + 4;
        }
        break;
      case 0x67737032:
        if (2 < (int)(*(ushort *)(param_1 + 0x302) - 1)) {
          return *(longlong *)(param_1 + 0x308) + 8;
        }
        break;
      case 0x67737033:
        if (3 < (int)(*(ushort *)(param_1 + 0x302) - 1)) {
          return *(longlong *)(param_1 + 0x308) + 0xc;
        }
        break;
      case 0x67737034:
        if (4 < (int)(*(ushort *)(param_1 + 0x302) - 1)) {
          return *(longlong *)(param_1 + 0x308) + 0x10;
        }
        break;
      case 0x67737035:
        if (5 < (int)(*(ushort *)(param_1 + 0x302) - 1)) {
          return *(longlong *)(param_1 + 0x308) + 0x14;
        }
        break;
      case 0x67737036:
        if (6 < (int)(*(ushort *)(param_1 + 0x302) - 1)) {
          return *(longlong *)(param_1 + 0x308) + 0x18;
        }
        break;
      case 0x67737037:
        if (7 < (int)(*(ushort *)(param_1 + 0x302) - 1)) {
          return *(longlong *)(param_1 + 0x308) + 0x1c;
        }
        break;
      case 0x67737038:
        if (8 < (int)(*(ushort *)(param_1 + 0x302) - 1)) {
          return *(longlong *)(param_1 + 0x308) + 0x20;
        }
        break;
      case 0x67737039:
        if (9 < (int)(*(ushort *)(param_1 + 0x302) - 1)) {
          return *(longlong *)(param_1 + 0x308) + 0x24;
        }
      }
    }
    else if (param_2 < 0x6863726f) {
      if (param_2 == 0x6863726e) {
        return param_1 + 0x14c;
      }
      if (param_2 == 0x68636c61) {
        return param_1 + 0x254;
      }
      if (param_2 == 0x68636c64) {
        return param_1 + 0x256;
      }
      if (param_2 == 0x68636f66) {
        return param_1 + 0x14e;
      }
    }
    else {
      if (param_2 == 0x68637273) {
        return param_1 + 0x14a;
      }
      if (param_2 == 0x68647363) {
        return param_1 + 0x250;
      }
      if (param_2 == 0x686c6770) {
        return param_1 + 0x252;
      }
    }
  }
  else if (param_2 < 0x756e6470) {
    if (param_2 == 0x756e646f) {
      return param_1 + 0x278;
    }
    if (param_2 < 0x73707874) {
      if (param_2 == 0x73707873) {
        return param_1 + 0x21a;
      }
      if (param_2 == 0x73627873) {
        return param_1 + 0x212;
      }
      if (param_2 == 0x7362796f) {
        return param_1 + 0x218;
      }
      if (param_2 == 0x73627973) {
        return param_1 + 0x214;
      }
      if (param_2 == 0x7370786f) {
        return param_1 + 0x21e;
      }
    }
    else {
      if (param_2 == 0x7370796f) {
        return param_1 + 0x220;
      }
      if (param_2 == 0x73707973) {
        return param_1 + 0x21c;
      }
      if (param_2 == 0x7374726f) {
        return param_1 + 0x224;
      }
      if (param_2 == 0x73747273) {
        return param_1 + 0x222;
      }
    }
  }
  else if (param_2 < 0x76637274) {
    if (param_2 == 0x76637273) {
      return param_1 + 0x1aa;
    }
    if (param_2 == 0x756e6473) {
      return param_1 + 0x27a;
    }
    if (param_2 == 0x76617363) {
      return param_1 + 0x19c;
    }
    if (param_2 == 0x76636f66) {
      return param_1 + 0x1ae;
    }
    if (param_2 == 0x7663726e) {
      return param_1 + 0x1ac;
    }
  }
  else {
    if (param_2 == 0x76647363) {
      return param_1 + 0x19e;
    }
    if (param_2 == 0x766c6770) {
      return param_1 + 0x1a0;
    }
    if (param_2 == 0x78686774) {
      return param_1 + 0x260;
    }
  }
  return 0;
}

