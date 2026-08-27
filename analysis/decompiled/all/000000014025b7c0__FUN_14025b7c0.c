// Function: FUN_14025b7c0
// Addr: 14025b7c0
// Size: 389 bytes


void FUN_14025b7c0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  size_t _Size;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  size_t sVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *_Buf1;
  undefined8 *****pppppuVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 ****local_48;
  undefined8 uStack_40;
  size_t local_38;
  ulonglong local_30;
  
  if (*(char *)(param_3 + 8) == '\x04') {
    FUN_140085cc0(param_3,&local_48);
  }
  else {
    local_38 = 0;
    uStack_40 = 0;
    local_48 = (undefined8 *****)0x0;
    local_30 = 0xf;
  }
  uVar11 = local_30;
  sVar7 = local_38;
  ppppuVar6 = local_48;
  puVar5 = DAT_1404e99b8;
  puVar4 = DAT_1404e99b0;
  iVar1 = *(int *)(param_2 + 4);
  lVar2 = *(longlong *)(param_1 + 8);
  puVar12 = DAT_1404e99b0;
  do {
    if (puVar12 == puVar5) {
      uVar8 = *(undefined1 *)(puVar4 + 4);
LAB_14025b8ae:
      *(undefined1 *)(iVar1 + lVar2) = uVar8;
      if (*(code **)(param_2 + 0x28) != (code *)0x0) {
        (**(code **)(param_2 + 0x28))(*(undefined8 *)(param_1 + 8),param_2);
      }
      if (0xf < local_30) {
        uVar11 = local_30 + 1;
        pppppuVar10 = (undefined8 *****)local_48;
        if (0xfff < uVar11) {
          pppppuVar10 = (undefined8 *****)local_48[-1];
          if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pppppuVar10))) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar11 = local_30 + 0x28;
        }
        thunk_FUN_14028af80(pppppuVar10,uVar11);
      }
      return;
    }
    _Size = puVar12[2];
    pppppuVar10 = &local_48;
    if (0xf < uVar11) {
      pppppuVar10 = (undefined8 *****)ppppuVar6;
    }
    _Buf1 = puVar12;
    if (0xf < (ulonglong)puVar12[3]) {
      _Buf1 = (undefined8 *)*puVar12;
    }
    if ((_Size == sVar7) && ((_Size == 0 || (iVar9 = memcmp(_Buf1,pppppuVar10,_Size), iVar9 == 0))))
    {
      uVar8 = *(undefined1 *)(puVar12 + 4);
      goto LAB_14025b8ae;
    }
    puVar12 = puVar12 + 5;
  } while( true );
}

