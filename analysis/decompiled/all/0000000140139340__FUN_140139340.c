// Function: FUN_140139340
// Addr: 140139340
// Size: 73 bytes


void FUN_140139340(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStackX_8 [8];
  
  FUN_140139460();
  puVar1 = (undefined8 *)(param_1 + 0x38);
  iVar3 = (*DAT_140426b78)(&DAT_140483940,0,0x17,&DAT_140483960,puVar1);
  if (iVar3 != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (*(ulonglong *)(param_1 + 0x30) < 0x10) {
      piVar5 = (int *)(param_1 + 0x18);
    }
    else {
      piVar5 = *(int **)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x28) == 7) {
      iVar3 = *piVar5 + -0x61666564;
      if ((iVar3 == 0) && (iVar3 = *(ushort *)(piVar5 + 1) - 0x6c75, iVar3 == 0)) {
        iVar3 = *(byte *)((longlong)piVar5 + 6) - 0x74;
      }
      if (iVar3 == 0) goto code_r0x0001401393db;
    }
    uVar4 = func_0x0001400ceea0(param_1 + 0x18,*puVar1,auStackX_8);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
code_r0x0001401393db:
  if ((*(longlong *)(param_1 + 0x40) != 0) ||
     (iVar3 = (**(code **)(*(longlong *)*puVar1 + 0x20))((longlong *)*puVar1,0,0,param_1 + 0x40),
     iVar3 == 0)) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                      (*(longlong **)(param_1 + 0x40),&UNK_140483950,0x17,0,
                       (undefined8 *)(param_1 + 0x48));
    if (iVar3 == 0) {
      (**(code **)(*(longlong *)*puVar1 + 0x30))((longlong *)*puVar1,*(undefined8 *)(param_1 + 8));
      plVar2 = *(longlong **)(param_1 + 0x48);
      lVar6 = *(longlong *)(param_1 + 8) + 8;
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar6 = 0;
      }
      (**(code **)(*plVar2 + 0x30))(plVar2,lVar6);
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
  }
  return;
}

