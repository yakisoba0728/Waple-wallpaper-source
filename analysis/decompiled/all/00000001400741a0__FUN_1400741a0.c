// Function: FUN_1400741a0
// Addr: 1400741a0
// Size: 193 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400741a0(void)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar6 = 0;
  plVar5 = (longlong *)*DAT_1404e5440;
  if (plVar5 != DAT_1404e5440) {
    do {
      lVar2 = lRam00000001404e5450;
      plVar3 = DAT_1404e5440;
      if ((*(byte *)((longlong)plVar5 + 0x53) & 2) != 0) {
        if ((ulonglong)plVar5[5] < 0x10) {
          plVar7 = plVar5 + 2;
        }
        else {
          plVar7 = (longlong *)plVar5[2];
        }
        uVar4 = 0xcbf29ce484222325;
        if (plVar5[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)plVar7 + uVar6);
            uVar6 = uVar6 + 1;
            uVar4 = (uVar4 ^ *pbVar1) * 0x100000001b3;
          } while (uVar6 < (ulonglong)plVar5[4]);
        }
        uVar4 = uVar4 & _DAT_1404e5468;
        plVar7 = *(longlong **)(lRam00000001404e5450 + uVar4 * 0x10);
        if (*(longlong **)(lRam00000001404e5450 + 8 + uVar4 * 0x10) == plVar5) {
          if (plVar7 == plVar5) {
            *(longlong **)(lRam00000001404e5450 + uVar4 * 0x10) = DAT_1404e5440;
            *(longlong **)(lVar2 + 8 + uVar4 * 0x10) = plVar3;
          }
          else {
            *(longlong *)(lRam00000001404e5450 + 8 + uVar4 * 0x10) = plVar5[1];
          }
        }
        else if (plVar7 == plVar5) {
          *(longlong *)(lRam00000001404e5450 + uVar4 * 0x10) = *plVar5;
        }
        lVar2 = *plVar5;
        _DAT_1404e5448 = _DAT_1404e5448 + -1;
        *(longlong *)plVar5[1] = lVar2;
        *(longlong *)(lVar2 + 8) = plVar5[1];
                    /* WARNING: Subroutine does not return */
        FUN_140017310(plVar5 + 0x13);
      }
      *(byte *)((longlong)plVar5 + 0x53) = *(byte *)((longlong)plVar5 + 0x53) & 0xfe;
      *(undefined1 *)(plVar5 + 10) = 0xff;
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != DAT_1404e5440);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086eb0(&DAT_1404e6448,"profile","");
}

