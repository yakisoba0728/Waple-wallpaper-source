// Function: FUN_1401588a0
// Addr: 1401588a0
// Size: 83 bytes


void FUN_1401588a0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *****pppppuVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 ****local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  if (*(char *)(param_3 + 8) == '\x04') {
    FUN_140085d90(param_3,&local_48);
  }
  else {
    local_38 = 0;
    uStack_40 = 0;
    local_48 = (undefined8 *****)0x0;
    local_30 = 0xf;
  }
  uVar12 = local_30;
  lVar7 = local_38;
  ppppuVar6 = local_48;
  puVar5 = puRam00000001404e9410;
  puVar4 = puRam00000001404e9408;
  iVar1 = *(int *)(param_2 + 4);
  lVar2 = *(longlong *)(param_1 + 8);
  puVar13 = puRam00000001404e9408;
  do {
    if (puVar13 == puVar5) {
      uVar8 = *(undefined1 *)(puVar4 + 4);
code_r0x00014015898e:
      *(undefined1 *)(iVar1 + lVar2) = uVar8;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(*(undefined8 *)(param_1 + 8),param_2);
      }
      if (0xf < local_30) {
        uVar12 = local_30 + 1;
        pppppuVar11 = (undefined8 *****)local_48;
        if (0xfff < uVar12) {
          pppppuVar11 = (undefined8 *****)local_48[-1];
          if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pppppuVar11))) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar12 = local_30 + 0x28;
        }
        func_0x00014028b040(pppppuVar11,uVar12);
      }
      return;
    }
    pppppuVar11 = &local_48;
    if (0xf < uVar12) {
      pppppuVar11 = (undefined8 *****)ppppuVar6;
    }
    puVar10 = puVar13;
    if (0xf < (ulonglong)puVar13[3]) {
      puVar10 = (undefined8 *)*puVar13;
    }
    if ((puVar13[2] == lVar7) &&
       ((puVar13[2] == 0 || (iVar9 = func_0x0001404210c0(puVar10,pppppuVar11), iVar9 == 0)))) {
      uVar8 = *(undefined1 *)(puVar13 + 4);
      goto code_r0x00014015898e;
    }
    puVar13 = puVar13 + 5;
  } while( true );
}

