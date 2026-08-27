// Function: FUN_140318790
// Addr: 140318790
// Size: 1124 bytes


void FUN_140318790(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  byte *_Str1;
  int local_res18 [2];
  int local_res20;
  
  puVar3 = *(undefined8 **)(param_1 + 0x2a0);
  pbVar4 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  _Str1 = (byte *)*param_2;
  if (pbVar4 <= _Str1) {
    *(undefined4 *)(param_2 + 3) = 3;
    return;
  }
  bVar1 = *_Str1;
  if ((9 < bVar1 - 0x30) && (bVar1 != 0x5b)) {
    if ((_Str1 + 0x11 < pbVar4) &&
       (iVar8 = strncmp((char *)_Str1,"StandardEncoding",0x10), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 2;
      return;
    }
    if ((_Str1 + 0xf < pbVar4) && (iVar8 = strncmp((char *)_Str1,"ExpertEncoding",0xe), iVar8 == 0))
    {
      *(undefined4 *)(param_1 + 0x1e0) = 4;
      return;
    }
    if ((_Str1 + 0x12 < pbVar4) &&
       (iVar8 = strncmp((char *)_Str1,"ISOLatin1Encoding",0x11), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 3;
      return;
    }
    *(undefined4 *)(param_2 + 3) = 0xa2;
    return;
  }
  uVar5 = param_2[4];
  if (bVar1 == 0x5b) {
    bVar6 = true;
    local_res20 = 0x100;
    bVar7 = true;
    *param_2 = (ulonglong)(_Str1 + 1);
  }
  else {
    bVar6 = false;
    bVar7 = false;
    local_res20 = (*(code *)param_2[9])(param_2);
    iVar8 = 0x100;
    if (0x100 < local_res20) goto LAB_140318905;
  }
  iVar8 = local_res20;
LAB_140318905:
  (*(code *)param_2[7])(param_2);
  if ((byte *)*param_2 < pbVar4) {
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      FUN_1402f7f90(uVar5);
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      FUN_1402f7f90(uVar5,*(undefined8 *)(param_1 + 0x200));
      *(undefined8 *)(param_1 + 0x200) = 0;
      if ((code *)param_2[0x22] != (code *)0x0) {
        (*(code *)param_2[0x22])();
      }
    }
    *(int *)(param_1 + 0x1e8) = iVar8;
    *(int *)(param_2 + 0x17) = iVar8;
    uVar11 = FUN_1402f7ff0(uVar5,2,0,iVar8,0,local_res18);
    *(undefined8 *)(param_1 + 0x1f8) = uVar11;
    if (local_res18[0] == 0) {
      uVar11 = FUN_1402f7ff0(uVar5,8,0,iVar8,0,local_res18);
      *(undefined8 *)(param_1 + 0x200) = uVar11;
      if ((local_res18[0] == 0) &&
         (local_res18[0] = (**(code **)*puVar3)(param_2 + 0x18,iVar8,uVar5), local_res18[0] == 0)) {
        iVar12 = 0;
        local_res18[0] = 0;
        if (0 < iVar8) {
          do {
            (*(code *)param_2[0x21])(param_2 + 0x18,iVar12,".notdef",8);
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar8);
        }
        (*(code *)param_2[7])(param_2);
        pbVar14 = (byte *)*param_2;
        if (pbVar14 < pbVar4) {
          iVar12 = 0;
          do {
            bVar1 = *pbVar14;
            if (bVar1 == 100) {
              _Str1 = pbVar14 + 3;
              if (((_Str1 < pbVar4) && (pbVar14[1] == 0x65)) && (pbVar14[2] == 0x66)) {
                bVar2 = *_Str1;
                if (((0x3c < bVar2) || ((0x1000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)
                    ) && ((0x3f < (byte)(bVar2 - 0x3e) ||
                          ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar2 - 0x3e) & 0x3f) & 1) ==
                           0)))) goto LAB_140318ac3;
                break;
              }
            }
            else {
LAB_140318ac3:
              if (bVar1 == 0x5d) {
                _Str1 = pbVar14 + 1;
                break;
              }
            }
            iVar9 = iVar12;
            if (bVar1 - 0x30 < 10) {
              if (!bVar6) {
                iVar9 = (*(code *)param_2[9])(param_2);
                (*(code *)param_2[7])(param_2);
                if (pbVar14 == (byte *)*param_2) goto LAB_140318bb2;
              }
LAB_140318b10:
              _Str1 = (byte *)*param_2;
              if (((_Str1 + 2 < pbVar4) && (*_Str1 == 0x2f)) && (iVar12 < local_res20)) {
                _Str1 = _Str1 + 1;
                *param_2 = (ulonglong)_Str1;
                (*(code *)param_2[8])(param_2);
                if (pbVar4 <= (byte *)*param_2) {
                  return;
                }
                if ((int)param_2[3] != 0) {
                  return;
                }
                if (iVar12 < iVar8) {
                  uVar13 = (int)(byte *)*param_2 - (int)_Str1;
                  iVar10 = (*(code *)param_2[0x21])(param_2 + 0x18,iVar9,_Str1,uVar13 + 1);
                  *(int *)(param_2 + 3) = iVar10;
                  if (iVar10 != 0) {
                    return;
                  }
                  *(undefined1 *)
                   ((ulonglong)uVar13 + *(longlong *)(param_2[0x1c] + (longlong)iVar9 * 8)) = 0;
                }
                iVar12 = iVar12 + 1;
                bVar6 = bVar7;
              }
              else if (bVar6) {
LAB_140318bb2:
                *(undefined4 *)(param_2 + 3) = 2;
                return;
              }
            }
            else {
              if (bVar6) goto LAB_140318b10;
              (*(code *)param_2[8])(param_2);
              _Str1 = pbVar14;
              if ((int)param_2[3] != 0) {
                return;
              }
            }
            (*(code *)param_2[7])(param_2);
            pbVar14 = (byte *)*param_2;
          } while (pbVar14 < pbVar4);
        }
        *(undefined4 *)(param_1 + 0x1e0) = 1;
        *param_2 = (ulonglong)_Str1;
        return;
      }
    }
    *(int *)(param_2 + 3) = local_res18[0];
  }
  return;
}

