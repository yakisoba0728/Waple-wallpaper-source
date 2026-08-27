// Function: FUN_140322f80
// Addr: 140322f80
// Size: 429 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_140322f80(char *param_1,uint param_2,undefined4 param_3,longlong param_4,int *param_5)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined1 auStack_178 [32];
  int *local_158;
  byte local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_178;
  lVar2 = *(longlong *)(param_4 + 0xa0);
  local_158 = param_5;
  uVar8 = FUN_1402f5c50(lVar2,param_3);
  pcVar11 = param_1;
  if ((int)uVar8 == 0) {
    pbVar10 = local_148;
    pbVar12 = local_148;
    bVar4 = false;
    cVar6 = '\x01';
    while (pcVar11 < param_1 + param_2) {
      if (pbVar10 <= pbVar12) {
        uVar7 = FUN_1402f54a0(lVar2);
        uVar9 = *(int *)(lVar2 + 8) - uVar7;
        if (uVar9 == 0) {
LAB_140323126:
          uVar8 = 0xa0;
        }
        else {
          uVar3 = 0x100;
          if (uVar9 < 0x100) {
            uVar3 = uVar9;
          }
          uVar8 = FUN_1402f54b0(lVar2,local_148,uVar3);
          if ((int)uVar8 == 0) {
            pbVar12 = local_148;
            uVar9 = FUN_1402f54a0(lVar2);
            pbVar10 = local_148 + ((ulonglong)uVar9 - (ulonglong)uVar7);
            goto LAB_140323075;
          }
        }
        goto LAB_1403230ff;
      }
LAB_140323075:
      bVar1 = *pbVar12;
      if (bVar1 - 0x30 < 10) {
        cVar5 = bVar1 - 0x30;
LAB_1403230af:
        if (cVar6 == '\0') {
          *pcVar11 = *pcVar11 + cVar5;
          pcVar11 = pcVar11 + 1;
        }
        else {
          *pcVar11 = cVar5 << 4;
        }
        if (bVar4) break;
        cVar6 = '\x01' - cVar6;
      }
      else {
        if ((byte)(bVar1 + 0x9f) < 6) {
          cVar5 = bVar1 + 0xa9;
          goto LAB_1403230af;
        }
        if ((byte)(bVar1 + 0xbf) < 6) {
          cVar5 = bVar1 - 0x37;
          goto LAB_1403230af;
        }
        if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
          if (bVar1 != 0x3e) goto LAB_140323126;
          cVar5 = '\0';
          bVar4 = true;
          goto LAB_1403230af;
        }
      }
      pbVar12 = pbVar12 + 1;
    }
    uVar8 = 0;
  }
LAB_1403230ff:
  *local_158 = (int)pcVar11 - (int)param_1;
  return uVar8;
}

