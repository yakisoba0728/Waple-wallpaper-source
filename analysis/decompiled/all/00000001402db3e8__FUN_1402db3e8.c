// Function: FUN_1402db3e8
// Addr: 1402db3e8
// Size: 24 bytes


/* WARNING: Possible PIC construction at 0x0001402db41b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001402db480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001402db420) */
/* WARNING: Removing unreachable block (ram,0x0001402e92ac) */
/* WARNING: Removing unreachable block (ram,0x0001402e92b4) */
/* WARNING: Removing unreachable block (ram,0x0001402e92bc) */

longlong FUN_1402db3e8(byte *param_1,uint param_2,int *param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 auStackX_18 [2];
  
  piVar6 = (int *)&DAT_1404e4938;
  if (param_3 != (int *)0x0) {
    piVar6 = param_3;
  }
  uVar1 = (short)param_2 + 0x2400;
  if (*piVar6 == 0) {
    if (0x3ff < uVar1) {
      if ((ushort)((short)param_2 + 0x2800U) < 0x400) {
        *piVar6 = (param_2 & 0x27ff) * 0x400 + 0x10000;
        return 0;
      }
      uVar5 = param_2 & 0xffff;
      if (param_1 != (byte *)0x0) {
        if (uVar5 != 0) {
          if ((param_2 & 0xff80) == 0) {
            *param_1 = (byte)uVar5;
            return 1;
          }
          if ((param_2 & 0xf800) == 0) {
            lVar7 = 1;
            bVar3 = 0xc0;
            lVar2 = lVar7;
          }
          else {
            if (uVar5 - 0xd800 < 0x800) goto LAB_1402e9300;
            lVar7 = 2;
            bVar3 = 0xe0;
            lVar2 = lVar7;
          }
          do {
            bVar4 = (byte)uVar5;
            uVar5 = uVar5 >> 6;
            param_1[lVar7] = bVar4 & 0x3f | 0x80;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          *param_1 = bVar3 | (byte)uVar5;
          lVar2 = lVar2 + 1;
          goto LAB_1402e92f8;
        }
        *param_1 = 0;
      }
      piVar6[0] = 0;
      piVar6[1] = 0;
      return 1;
    }
  }
  else if (uVar1 < 0x400) {
    auStackX_18[0] = 0;
    lVar2 = FUN_1402e9254(param_1,(param_2 & 0x23ff) + *piVar6,auStackX_18);
LAB_1402e92f8:
    piVar6[0] = 0;
    piVar6[1] = 0;
    return lVar2;
  }
LAB_1402e9300:
  piVar6[0] = 0;
  piVar6[1] = 0;
  *(undefined1 *)(param_4 + 0x30) = 1;
  *(undefined4 *)(param_4 + 0x2c) = 0x2a;
  return -1;
}

