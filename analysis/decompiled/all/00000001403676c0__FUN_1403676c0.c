// Function: FUN_1403676c0
// Addr: 1403676c0
// Size: 504 bytes


ulonglong * FUN_1403676c0(ulonglong *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  puVar8 = param_3 + 6;
  if (param_2 < param_3) {
    uVar7 = *param_3;
    do {
      uVar2 = param_3[-6];
      puVar9 = param_3 + -6;
      if ((uVar2 < uVar7) || (uVar2 != uVar7)) break;
      param_3 = puVar9;
      uVar7 = uVar2;
    } while (param_2 < puVar9);
  }
  puVar9 = puVar8;
  puVar6 = param_3;
  if (puVar8 < param_4) {
    do {
      puVar9 = puVar8;
      if ((*puVar8 < *param_3) || (*puVar8 != *param_3)) break;
      puVar8 = puVar8 + 6;
      puVar9 = puVar8;
    } while (puVar8 < param_4);
  }
joined_r0x000140367723:
  do {
    if (param_4 <= puVar8) {
joined_r0x000140367765:
      while (puVar5 = puVar6, puVar4 = param_3, puVar6 = puVar5, param_2 < puVar4) {
        param_3 = puVar4 + -6;
        if (*puVar5 <= *param_3) {
          if (*param_3 != *puVar5) break;
          puVar6 = puVar5 + -6;
          if (puVar6 != param_3) {
            uVar1 = *(undefined8 *)puVar6;
            uVar3 = *(undefined4 *)(puVar5 + -2);
            *(undefined8 *)puVar6 = *(undefined8 *)param_3;
            *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(puVar4 + -2);
            *(undefined8 *)param_3 = uVar1;
            *(undefined4 *)(puVar4 + -2) = uVar3;
          }
        }
      }
      if (puVar4 == param_2) {
        if (puVar8 == param_4) {
          *param_1 = (ulonglong)puVar5;
          param_1[1] = (ulonglong)puVar9;
          return param_1;
        }
        if (puVar9 != puVar8) {
          uVar1 = *(undefined8 *)puVar5;
          uVar3 = *(undefined4 *)(puVar5 + 4);
          *(undefined8 *)puVar5 = *(undefined8 *)puVar9;
          *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar9 + 4);
          *(undefined8 *)puVar9 = uVar1;
          *(undefined4 *)(puVar9 + 4) = uVar3;
        }
        uVar1 = *(undefined8 *)puVar5;
        uVar3 = *(undefined4 *)(puVar5 + 4);
        *(undefined8 *)puVar5 = *(undefined8 *)puVar8;
        *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar8 + 4);
        *(undefined8 *)puVar8 = uVar1;
        *(undefined4 *)(puVar8 + 4) = uVar3;
        puVar8 = puVar8 + 6;
        puVar9 = puVar9 + 6;
        param_3 = puVar4;
        puVar6 = puVar5 + 6;
      }
      else {
        param_3 = puVar4 + -6;
        if (puVar8 == param_4) {
          puVar6 = puVar5 + -6;
          if (param_3 != puVar6) {
            uVar1 = *(undefined8 *)param_3;
            uVar3 = *(undefined4 *)(puVar4 + -2);
            *(undefined8 *)param_3 = *(undefined8 *)puVar6;
            *(undefined4 *)(puVar4 + -2) = *(undefined4 *)(puVar5 + -2);
            *(undefined8 *)puVar6 = uVar1;
            *(undefined4 *)(puVar5 + -2) = uVar3;
          }
          uVar1 = *(undefined8 *)puVar6;
          uVar3 = *(undefined4 *)(puVar5 + -2);
          *(undefined8 *)puVar6 = *(undefined8 *)(puVar9 + -6);
          *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(puVar9 + -2);
          *(undefined8 *)(puVar9 + -6) = uVar1;
          *(undefined4 *)(puVar9 + -2) = uVar3;
          puVar9 = puVar9 + -6;
        }
        else {
          uVar1 = *(undefined8 *)puVar8;
          uVar3 = *(undefined4 *)(puVar8 + 4);
          *(undefined8 *)puVar8 = *(undefined8 *)param_3;
          *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar4 + -2);
          puVar8 = puVar8 + 6;
          *(undefined8 *)param_3 = uVar1;
          *(undefined4 *)(puVar4 + -2) = uVar3;
        }
      }
      goto joined_r0x000140367723;
    }
    if (*puVar8 <= *puVar6) {
      if (*puVar6 != *puVar8) goto joined_r0x000140367765;
      if (puVar9 != puVar8) {
        uVar1 = *(undefined8 *)puVar9;
        uVar3 = *(undefined4 *)(puVar9 + 4);
        *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
        *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar8 + 4);
        *(undefined8 *)puVar8 = uVar1;
        *(undefined4 *)(puVar8 + 4) = uVar3;
      }
      puVar9 = puVar9 + 6;
    }
    puVar8 = puVar8 + 6;
  } while( true );
}

