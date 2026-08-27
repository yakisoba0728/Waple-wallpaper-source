// Function: FUN_14032ff70
// Addr: 14032ff70
// Size: 685 bytes


void FUN_14032ff70(longlong *param_1,undefined8 *param_2,ulonglong param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  
  *param_4 = 0xffffffff;
  FUN_14032fda0(param_1,&local_40);
  if (local_30 == 3) {
    local_50 = *param_1;
    local_48 = param_1[2];
    pbVar5 = (byte *)(local_38 + -1);
    pbVar6 = (byte *)(local_40 + 1);
    *param_1 = (longlong)pbVar6;
    param_1[2] = (longlong)pbVar5;
    puVar7 = param_2;
    if (pbVar6 < pbVar5) {
LAB_140330010:
      bVar1 = *pbVar6;
      if ((bVar1 < 0x21) && ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) {
LAB_140330036:
        pbVar6 = pbVar6 + 1;
        if (pbVar6 < pbVar5) goto LAB_140330010;
      }
      else if (bVar1 == 0x25) {
        do {
          if ((*pbVar6 == 0xd) || (*pbVar6 == 10)) break;
          pbVar6 = pbVar6 + 1;
        } while (pbVar6 < pbVar5);
        goto LAB_140330036;
      }
      *param_1 = (longlong)pbVar6;
      if (pbVar5 <= pbVar6) goto LAB_1403301d3;
      bVar1 = *pbVar6;
      local_58 = pbVar6;
      if (bVar1 == 0x28) {
        iVar2 = FUN_14033c310(&local_58,pbVar5);
        if (iVar2 != 0) goto LAB_1403301d3;
        uVar4 = 2;
      }
      else {
        if (bVar1 == 0x5b) {
          *param_1 = (longlong)(pbVar6 + 1);
          iVar2 = 1;
          FUN_14032fbb0(param_1);
          pbVar3 = (byte *)*param_1;
          if (pbVar3 < pbVar5) {
            do {
              if ((int)param_1[3] != 0) break;
              if (*pbVar3 == 0x5b) {
                iVar2 = iVar2 + 1;
              }
              else if ((*pbVar3 == 0x5d) && (iVar2 = iVar2 + -1, iVar2 < 1)) goto LAB_140330151;
              *param_1 = (longlong)pbVar3;
              FUN_14032fc10(param_1);
              for (pbVar3 = (byte *)*param_1; pbVar3 < (byte *)param_1[2]; pbVar3 = pbVar3 + 1) {
                bVar1 = *pbVar3;
                if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
                  if (bVar1 != 0x25) break;
                  do {
                    if ((*pbVar3 == 0xd) || (*pbVar3 == 10)) break;
                    pbVar3 = pbVar3 + 1;
                  } while (pbVar3 < (byte *)param_1[2]);
                }
              }
              *param_1 = (longlong)pbVar3;
              if (pbVar5 <= pbVar3) break;
            } while( true );
          }
          goto LAB_1403301d3;
        }
        if (bVar1 != 0x7b) {
          uVar4 = 1;
          if (bVar1 == 0x2f) {
            uVar4 = 4;
          }
          FUN_14032fc10(param_1);
          local_58 = (byte *)*param_1;
          if ((int)param_1[3] == 0) goto LAB_140330176;
          goto LAB_1403301d3;
        }
        iVar2 = FUN_14033c450(&local_58,pbVar5);
        if (iVar2 != 0) goto LAB_1403301d3;
        uVar4 = 3;
      }
      goto LAB_140330176;
    }
LAB_1403301d3:
    *param_4 = (int)(((longlong)puVar7 - (longlong)param_2) / 0x18);
    *param_1 = local_50;
    param_1[2] = local_48;
  }
  return;
LAB_140330151:
  uVar4 = 3;
  local_58 = pbVar3 + 1;
LAB_140330176:
  if (local_58 == (byte *)0x0) goto LAB_1403301d3;
  *param_1 = (longlong)local_58;
  if ((param_2 != (undefined8 *)0x0) && (puVar7 < param_2 + (param_3 & 0xffffffff) * 3)) {
    *(undefined4 *)((longlong)puVar7 + 0x14) = local_2c;
    *puVar7 = pbVar6;
    puVar7[1] = local_58;
    *(undefined4 *)(puVar7 + 2) = uVar4;
  }
  pbVar5 = (byte *)param_1[2];
  puVar7 = puVar7 + 3;
  pbVar6 = (byte *)*param_1;
  if (pbVar5 <= pbVar6) goto LAB_1403301d3;
  goto LAB_140330010;
}

