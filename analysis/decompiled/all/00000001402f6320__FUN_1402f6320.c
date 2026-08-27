// Function: FUN_1402f6320
// Addr: 1402f6320
// Size: 1249 bytes


ulonglong FUN_1402f6320(longlong *param_1,longlong *param_2,longlong param_3,int param_4,int param_5
                       ,undefined8 param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  int local_64;
  int local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [8];
  uint local_50;
  ulonglong local_48;
  longlong local_40;
  
  iVar10 = 0;
  if (param_5 != -1) {
    iVar10 = param_5;
  }
  if (iVar10 != 0) {
    return 1;
  }
  iVar10 = 0;
  uVar14 = 0;
  local_40 = *param_1;
  if (0 < param_4) {
    do {
      uVar11 = *(uint *)(param_3 + (longlong)iVar10 * 4);
      uVar7 = (ulonglong)uVar11;
      if ((code *)param_2[4] == (code *)0x0) {
        bVar15 = *(uint *)(param_2 + 1) < uVar11;
      }
      else {
        iVar3 = (*(code *)param_2[4])(param_2,uVar7,0,0);
        bVar15 = iVar3 != 0;
      }
      puVar13 = (uint *)((longlong)param_2 + 0xc);
      if ((-(uint)bVar15 & 0x55) != 0) {
        return (ulonglong)(-(uint)bVar15 & 0x55);
      }
      *puVar13 = uVar11;
      if (*(uint *)(param_2 + 1) <= uVar11 + 3) {
        return 0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        uVar4 = 0;
        puVar8 = (undefined1 *)(*param_2 + uVar7);
        if (puVar8 != (undefined1 *)0x0) goto LAB_1402f641f;
      }
      else {
        iVar3 = (*(code *)param_2[4])(param_2,uVar7,local_5c);
        if (iVar3 != 4) {
          return 0x55;
        }
        uVar11 = *puVar13;
        puVar8 = local_5c;
LAB_1402f641f:
        uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]);
      }
      *puVar13 = uVar11 + 4;
      if ((0xffffff < uVar4) || (0xffffff - uVar4 < uVar14 + 6)) {
        return 9;
      }
      iVar10 = iVar10 + 1;
      uVar14 = uVar14 + 6 + uVar4;
      local_50 = uVar14;
    } while (iVar10 < param_4);
    uVar14 = uVar14 + 2;
    if (5 < uVar14) {
      if ((int)uVar14 < 1) {
        puVar5 = (undefined4 *)0x0;
        if ((int)uVar14 < 0) {
          return 6;
        }
      }
      else {
        puVar5 = (undefined4 *)(**(code **)(local_40 + 8))(local_40,uVar14);
        if (puVar5 == (undefined4 *)0x0) {
          return 0x40;
        }
      }
      *puVar5 = 0x180;
      local_64 = 0;
      local_48 = 2;
      *(undefined2 *)(puVar5 + 1) = 0;
      local_60 = 0;
      cVar2 = '\x01';
      uVar11 = 6;
      do {
        uVar4 = *(uint *)(param_3 + (longlong)local_60 * 4);
        uVar7 = (ulonglong)uVar4;
        if ((code *)param_2[4] == (code *)0x0) {
          bVar15 = *(uint *)(param_2 + 1) < uVar4;
        }
        else {
          iVar10 = (*(code *)param_2[4])(param_2,uVar7,0,0);
          bVar15 = iVar10 != 0;
        }
        puVar13 = (uint *)((longlong)param_2 + 0xc);
        if (((-bVar15 & 0x55U) != 0) || (*puVar13 = uVar4, *(uint *)(param_2 + 1) <= uVar4 + 3))
        goto LAB_1402f67b4;
        if ((code *)param_2[4] == (code *)0x0) {
          puVar8 = (undefined1 *)(*param_2 + uVar7);
          uVar12 = 0;
          if (puVar8 != (undefined1 *)0x0) goto LAB_1402f658e;
        }
        else {
          iVar10 = (*(code *)param_2[4])(param_2,uVar7);
          if (iVar10 != 4) goto LAB_1402f67b4;
          uVar4 = *puVar13;
          puVar8 = local_58;
LAB_1402f658e:
          uVar12 = CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]);
        }
        uVar9 = uVar4 + 4;
        *puVar13 = uVar9;
        if ((0x7fffffff < uVar12) || (*(uint *)(param_2 + 1) <= uVar4 + 5)) goto LAB_1402f67b4;
        if ((code *)param_2[4] == (code *)0x0) {
          cVar1 = '\0';
          pcVar6 = (char *)(*param_2 + (ulonglong)uVar9);
          if (pcVar6 != (char *)0x0) goto LAB_1402f660b;
        }
        else {
          iVar10 = (*(code *)param_2[4])(param_2,uVar9,&param_5);
          if (iVar10 != 2) goto LAB_1402f67b4;
          uVar9 = *puVar13;
          pcVar6 = (char *)&param_5;
LAB_1402f660b:
          cVar1 = *pcVar6;
        }
        *puVar13 = uVar9 + 2;
        if (cVar1 != '\0') {
          if (uVar12 < 3) {
            iVar10 = 0;
          }
          else {
            iVar10 = uVar12 - 2;
          }
          if (cVar1 == cVar2) {
            local_64 = local_64 + iVar10;
            cVar1 = cVar2;
          }
          else {
            iVar3 = (int)local_48;
            if (uVar14 < iVar3 + 3U) goto LAB_1402f67b4;
            *(char *)((ulonglong)(iVar3 + 3U) + (longlong)puVar5) = (char)((uint)local_64 >> 0x18);
            *(char *)((local_48 & 0xffffffff) + (longlong)puVar5) = (char)local_64;
            *(char *)((ulonglong)(iVar3 + 1) + (longlong)puVar5) = (char)((uint)local_64 >> 8);
            *(char *)((ulonglong)(iVar3 + 2) + (longlong)puVar5) = (char)((uint)local_64 >> 0x10);
            if (cVar1 == '\x05') break;
            if (uVar14 < uVar11 + 6) goto LAB_1402f67b4;
            *(undefined1 *)((ulonglong)uVar11 + (longlong)puVar5) = 0x80;
            *(char *)((ulonglong)(uVar11 + 1) + (longlong)puVar5) = cVar1;
            local_48 = (ulonglong)(uVar11 + 2);
            *(undefined1 *)(local_48 + (longlong)puVar5) = 0;
            *(undefined1 *)((ulonglong)(uVar11 + 3) + (longlong)puVar5) = 0;
            *(undefined1 *)((ulonglong)(uVar11 + 4) + (longlong)puVar5) = 0;
            *(undefined1 *)((ulonglong)(uVar11 + 5) + (longlong)puVar5) = 0;
            uVar11 = uVar11 + 6;
            local_64 = iVar10;
          }
          if (((local_50 < uVar11) || (local_50 < iVar10 + uVar11)) ||
             (iVar3 = FUN_1402f54b0(param_2,(ulonglong)uVar11 + (longlong)puVar5),
             uVar11 = iVar10 + uVar11, cVar2 = cVar1, iVar3 != 0)) goto LAB_1402f67b4;
        }
        local_60 = local_60 + 1;
      } while (local_60 < param_4);
      if (uVar11 + 2 <= uVar14) {
        iVar10 = (int)local_48;
        *(undefined1 *)((ulonglong)uVar11 + (longlong)puVar5) = 0x80;
        *(undefined1 *)((ulonglong)(uVar11 + 1) + (longlong)puVar5) = 3;
        if (iVar10 + 3U <= uVar14) {
          *(char *)((local_48 & 0xffffffff) + (longlong)puVar5) = (char)local_64;
          *(char *)((ulonglong)(iVar10 + 1) + (longlong)puVar5) = (char)((uint)local_64 >> 8);
          *(char *)((ulonglong)(iVar10 + 2) + (longlong)puVar5) = (char)((uint)local_64 >> 0x10);
          *(char *)((ulonglong)(iVar10 + 3U) + (longlong)puVar5) = (char)((uint)local_64 >> 0x18);
          uVar7 = FUN_1402f9b80(param_1,puVar5,uVar11 + 2,0,"type1",param_6);
          return uVar7;
        }
      }
LAB_1402f67b4:
      (**(code **)(local_40 + 0x10))(local_40,puVar5);
      return 1;
    }
  }
  return 10;
}

