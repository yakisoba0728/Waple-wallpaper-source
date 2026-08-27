// Function: FUN_14034dec0
// Addr: 14034dec0
// Size: 816 bytes


ulonglong FUN_14034dec0(longlong *param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                       undefined4 param_6,undefined4 param_7,char param_8)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  code *pcVar12;
  byte *local_res8;
  
  if ((param_4 == 0) || (*(uint *)(param_1 + 5) < param_3 + param_4)) {
    return 6;
  }
  lVar4 = param_1[1];
  uVar7 = FUN_1402f5c50(lVar4,*(int *)((longlong)param_1 + 0x24) + param_3);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uVar7 = FUN_1402f5150(lVar4,(ulonglong)param_4,&local_res8);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  pbVar1 = local_res8 + param_4;
  switch(param_2 + -1) {
  case 0:
  case 1:
  case 7:
  case 0x10:
    pbVar10 = local_res8 + 5;
    if (pbVar1 < pbVar10) goto LAB_14034e00d;
    uVar7 = 0;
    puVar5 = (ushort *)param_1[3];
    *puVar5 = (ushort)*local_res8;
    puVar5[1] = (ushort)local_res8[1];
    puVar5[2] = (short)(char)local_res8[2];
    puVar5[3] = (short)(char)local_res8[3];
    puVar5[4] = (ushort)local_res8[4];
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    break;
  default:
    uVar7 = 0;
    pbVar10 = local_res8;
    goto LAB_14034e022;
  case 5:
  case 6:
  case 8:
  case 0x11:
    uVar7 = 0;
    if (local_res8 + 5 <= pbVar1) {
      puVar5 = (ushort *)param_1[3];
      *puVar5 = (ushort)*local_res8;
      puVar5[1] = (ushort)local_res8[1];
      puVar5[2] = (short)(char)local_res8[2];
      puVar5[3] = (short)(char)local_res8[3];
      puVar5[4] = (ushort)local_res8[4];
      if (local_res8 + 8 <= pbVar1) {
        puVar5[5] = (short)(char)local_res8[5];
        puVar5[6] = (short)(char)local_res8[6];
        puVar5[7] = (ushort)local_res8[7];
        *(undefined1 *)(param_1 + 4) = 1;
        pbVar10 = local_res8 + 8;
        break;
      }
    }
LAB_14034e00d:
    uVar7 = 6;
    pbVar10 = local_res8;
  }
  if ((int)uVar7 != 0) goto LAB_14034e1bd;
LAB_14034e022:
  uVar9 = 0;
  switch(param_2 + -1) {
  case 0:
  case 5:
    pcVar12 = FUN_14034e260;
    break;
  case 1:
  case 6:
    uVar3 = ((ushort *)param_1[3])[1];
    uVar8 = (uint)*(ushort *)param_1[3];
    uVar11 = (uVar3 + 7 >> 3) * uVar8;
    if ((uVar11 <= uVar8 * uVar3 + 7 >> 3) || (uVar11 - ((int)pbVar1 - (int)pbVar10) != 0))
    goto switchD_14034e03c_caseD_4;
    pcVar12 = FUN_14034e260;
    break;
  default:
    uVar7 = 8;
    goto LAB_14034e1bd;
  case 4:
switchD_14034e03c_caseD_4:
    pcVar12 = FUN_14034dc70;
    break;
  case 7:
    pbVar10 = pbVar10 + 1;
    if (pbVar1 < pbVar10) goto LAB_14034e1bd;
  case 8:
    pcVar12 = FUN_14034e430;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
    uVar7 = 7;
    goto LAB_14034e1bd;
  }
  if (*(char *)((longlong)param_1 + 0x21) == '\0') {
    if ((char)param_1[4] == '\0') {
      uVar7 = 6;
      goto LAB_14034e1bd;
    }
    puVar6 = (uint *)param_1[2];
    uVar3 = ((ushort *)param_1[3])[1];
    uVar8 = (uint)uVar3;
    *puVar6 = (uint)*(ushort *)param_1[3];
    puVar6[1] = (uint)uVar3;
    cVar2 = *(char *)((longlong)param_1 + 0x22);
    if (cVar2 == '\x01') {
      *(undefined1 *)((longlong)puVar6 + 0x1a) = 1;
      uVar8 = uVar3 + 7 >> 3;
      *(undefined2 *)(puVar6 + 6) = 2;
    }
    else if (cVar2 == '\x02') {
      *(undefined1 *)((longlong)puVar6 + 0x1a) = 3;
      uVar8 = uVar3 + 3 >> 2;
      *(undefined2 *)(puVar6 + 6) = 4;
    }
    else if (cVar2 == '\x04') {
      *(undefined1 *)((longlong)puVar6 + 0x1a) = 4;
      uVar8 = uVar3 + 1 >> 1;
      *(undefined2 *)(puVar6 + 6) = 0x10;
    }
    else if (cVar2 == '\b') {
      *(undefined1 *)((longlong)puVar6 + 0x1a) = 2;
      *(undefined2 *)(puVar6 + 6) = 0x100;
    }
    else {
      if (cVar2 != ' ') {
        uVar7 = 3;
        goto LAB_14034e1bd;
      }
      *(undefined1 *)((longlong)puVar6 + 0x1a) = 7;
      uVar8 = (uint)uVar3 * 4;
      *(undefined2 *)(puVar6 + 6) = 0x100;
    }
    puVar6[2] = uVar8;
    if (param_8 != '\0') {
LAB_14034e170:
      uVar7 = uVar9;
      if ((int)uVar9 != 0) goto LAB_14034e1bd;
      goto LAB_14034e174;
    }
    uVar8 = FUN_1402f6fb0(*(undefined8 *)(*param_1 + 0x78));
    uVar9 = (ulonglong)uVar8;
    if ((uVar8 != 0) || (*(longlong *)(puVar6 + 4) == 0)) goto LAB_14034e170;
    *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  }
  else {
LAB_14034e174:
    if (param_8 != '\0') goto LAB_14034e1bd;
  }
  uVar8 = (*pcVar12)(param_1,pbVar10,pbVar1,param_5,param_6,param_7);
  uVar7 = (ulonglong)uVar8;
LAB_14034e1bd:
  FUN_1402f5c00(lVar4,&local_res8);
  return uVar7;
}

