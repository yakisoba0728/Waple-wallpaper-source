// Function: FUN_1400a8ed0
// Addr: 1400a8ed0
// Size: 430 bytes


char * FUN_1400a8ed0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint local_98 [26];
  
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  uVar7 = 1;
  local_98[0] = 0;
  lVar8 = (param_2 & 0xffffffff) * 0x404 + param_1;
  uVar1 = 1;
  uVar4 = 1;
  local_98[9] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[0xc] = 0;
  *(undefined4 *)(lVar8 + 0x8694) = 0;
  local_98[0xd] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0;
  local_98[0x10] = 0;
  local_98[0x11] = 0;
  local_98[0x12] = 0;
  local_98[0x13] = 0;
  local_98[0x14] = 0;
  do {
    if (0x14 < uVar4) {
      if (uVar1 == 0) {
        return (char *)0x0;
      }
LAB_1400a905b:
      return "#bzip2: bad Huffman code (under-subscribed)";
    }
    if ((*(uint *)(param_1 + 0x70) >> (uVar4 & 0x1f) & 1) != 0) {
      uVar6 = 0;
LAB_1400a8f47:
      uVar5 = (uint)uVar6;
      if (uVar5 < *(uint *)(param_1 + 100)) {
        if (*(uint *)(param_1 + 0xaaac + uVar6 * 4) == uVar4) {
          while( true ) {
            if (uVar1 == 0) {
              return "#bzip2: bad Huffman code (over-subscribed)";
            }
            uVar2 = (ulonglong)local_98[uVar1 - 1];
            if (uVar4 <= uVar1) break;
            if (*(short *)(lVar8 + 0x8694 + uVar2 * 4) == 0) {
              *(short *)(lVar8 + 0x8694 + uVar2 * 4) = (short)uVar7;
            }
            else {
              *(short *)(lVar8 + 0x8696 + uVar2 * 4) = (short)uVar7;
            }
            if (0x100 < uVar7) goto LAB_1400a905b;
            uVar2 = (ulonglong)uVar7;
            local_98[uVar1] = uVar7;
            uVar7 = uVar7 + 1;
            *(undefined4 *)(lVar8 + 0x8694 + uVar2 * 4) = 0;
            uVar1 = uVar1 + 1;
          }
          if (uVar5 < 2) {
            sVar3 = (short)uVar6 + 0x301;
          }
          else {
            sVar3 = 0x300;
            if (uVar5 + 1 < *(uint *)(param_1 + 100)) {
              sVar3 = (short)uVar6 + 0x1ff;
            }
          }
          uVar6 = (ulonglong)(uVar5 + 1);
          if (*(short *)(lVar8 + 0x8694 + uVar2 * 4) == 0) {
            *(short *)(lVar8 + 0x8694 + uVar2 * 4) = sVar3;
          }
          else {
            *(short *)(lVar8 + 0x8696 + uVar2 * 4) = sVar3;
            uVar5 = uVar1 - 1;
            do {
              uVar1 = uVar5;
              if (uVar1 == 0) break;
              uVar5 = uVar1 - 1;
            } while (*(short *)(lVar8 + 0x8696 + (ulonglong)local_98[uVar1 - 1] * 4) != 0);
          }
        }
        else {
          uVar6 = (ulonglong)(uVar5 + 1);
        }
        goto LAB_1400a8f47;
      }
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

