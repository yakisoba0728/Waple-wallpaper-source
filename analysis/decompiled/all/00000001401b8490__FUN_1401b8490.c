// Function: FUN_1401b8490
// Addr: 1401b8490
// Size: 576 bytes


ulonglong FUN_1401b8490(longlong *param_1,char *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  ulonglong uVar7;
  uint *local_res18 [2];
  uint local_48;
  uint local_44 [5];
  
  pbVar5 = param_3;
  pbVar4 = param_3;
  uVar7 = (ulonglong)param_5;
  if (param_5 != (byte *)0x0) {
    while (pbVar5 = pbVar4, pbVar4 != param_4) {
      local_res18[0] = &local_48;
      param_5 = pbVar4;
      while (local_res18[0] != local_44) {
        bVar1 = *param_5;
        uVar2 = (uint)bVar1;
        if (bVar1 < 0x80) {
          param_5 = param_5 + 1;
        }
        else {
          if (bVar1 < 0xc0) goto LAB_1401b86b3;
          if (bVar1 < 0xe0) {
            uVar2 = uVar2 & 0x1f;
            iVar6 = 1;
          }
          else if (bVar1 < 0xf0) {
            uVar2 = uVar2 & 0xf;
            iVar6 = 2;
          }
          else if (bVar1 < 0xf8) {
            uVar2 = uVar2 & 7;
            iVar6 = 3;
          }
          else {
            uVar2 = uVar2 & 3;
            iVar6 = 5 - (uint)(bVar1 < 0xfc);
          }
          if ((longlong)param_4 - (longlong)param_5 < (longlong)(ulonglong)(iVar6 + 1)) break;
          param_5 = param_5 + 1;
          do {
            bVar1 = *param_5;
            if (0x3f < (byte)(bVar1 + 0x80)) goto LAB_1401b86b3;
            param_5 = param_5 + 1;
            uVar2 = bVar1 & 0x3f | uVar2 << 6;
            iVar6 = iVar6 + -1;
          } while (0 < iVar6);
        }
        if (((*param_2 == '\0') &&
            (*param_2 = '\x01', (*(byte *)((longlong)param_1 + 0x14) & 4) != 0)) &&
           (uVar2 == 0xfeff)) {
          uVar2 = (**(code **)(*param_1 + 0x30))
                            (param_1,param_2,param_5,param_4,&param_5,&local_48,local_44,local_res18
                            );
          pbVar5 = param_5;
          if (uVar2 == 1) {
            *param_2 = '\0';
            pbVar5 = pbVar4;
          }
          goto LAB_1401b8614;
        }
        if (*(uint *)(param_1 + 2) < uVar2) goto LAB_1401b86b3;
        *local_res18[0] = uVar2;
        local_res18[0] = local_res18[0] + 1;
        if (param_5 == param_4) break;
      }
      uVar2 = (uint)(pbVar4 == param_5);
      pbVar5 = param_5;
LAB_1401b8614:
      if (uVar2 != 0) {
        pbVar5 = pbVar4;
        if (uVar2 == 3) {
          uVar3 = (longlong)param_4 - (longlong)pbVar4;
          if (uVar7 < (ulonglong)((longlong)param_4 - (longlong)pbVar4)) {
            uVar3 = uVar7;
          }
          pbVar5 = pbVar4 + uVar3;
        }
        break;
      }
      if (local_res18[0] == local_44) {
        uVar7 = uVar7 - 1;
      }
      pbVar4 = pbVar5;
      if (uVar7 == 0) break;
    }
  }
LAB_1401b86b3:
  uVar7 = (longlong)pbVar5 - (longlong)param_3 & 0xffffffff;
  if (0x7fffffff < (longlong)pbVar5 - (longlong)param_3) {
    uVar7 = 0x7fffffff;
  }
  return uVar7;
}

