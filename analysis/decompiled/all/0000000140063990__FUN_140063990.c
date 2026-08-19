// Function: FUN_140063990
// Addr: 140063990
// Size: 275 bytes


void FUN_140063990(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  
  puVar9 = auStack_88;
  iVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  plVar10 = (longlong *)0x0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if ((iVar5 == 1) || (iVar5 == 4)) {
    plVar10 = param_3 + 0x2b;
  }
  uVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  iVar5 = func_0x000140290e50(param_1 + 0x28);
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x74) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    cVar1 = *(char *)(**(longlong **)(param_1 + 8) + 0x19);
    plVar3 = (longlong *)**(longlong **)(param_1 + 8);
    while( true ) {
      if (cVar1 != '\0') {
        FUN_140290f70(param_1 + 0x28);
        (**(code **)(*param_3 + 0x38))(param_3,&local_68);
        if (local_68 != 0) {
          lVar7 = local_68;
          if ((0xfff < (ulonglong)((local_58 - local_68 >> 3) * 8)) &&
             (lVar7 = *(longlong *)(local_68 + -8), puVar9 = auStack_88,
             0x1f < (local_68 - *(longlong *)(local_68 + -8)) - 8U)) {
            lVar7 = 5;
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar9 = auStack_80;
          }
          *(undefined **)(puVar9 + -8) = &UNK_140063d0b;
          func_0x00014028b040(lVar7);
          return;
        }
        return;
      }
      plVar8 = (longlong *)plVar3[9];
      if ((plVar8 != (longlong *)0x0) &&
         (lVar7 = (**(code **)(*plVar8 + 0x48))(plVar8,param_2,uVar6,plVar10), lVar7 != 0)) break;
      plVar8 = (longlong *)plVar3[2];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        while (cVar1 == '\0') {
          plVar8 = (longlong *)*plVar8;
          cVar1 = *(char *)(*plVar8 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar3[1] + 0x19);
        plVar4 = (longlong *)plVar3[1];
        while ((plVar8 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar4 = (longlong *)plVar8[1];
          plVar3 = plVar8;
        }
      }
      cVar1 = *(char *)((longlong)plVar8 + 0x19);
      plVar3 = plVar8;
    }
    func_0x00014028aff0(0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(5);
}

