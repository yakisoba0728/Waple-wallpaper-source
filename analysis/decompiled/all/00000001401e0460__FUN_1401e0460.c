// Function: FUN_1401e0460
// Addr: 1401e0460
// Size: 183 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401e0460(longlong *param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [112];
  
  local_b8 = _DAT_140492b30;
  uStack_b0 = _UNK_140492b38;
  local_a8 = _DAT_140492b60;
  uStack_a0 = _UNK_140492b68;
  local_98 = _DAT_140492c10;
  uStack_90 = _UNK_140492c18;
  local_88 = _DAT_140492eb0;
  uStack_80 = _UNK_140492eb8;
  if ((*param_3 & 8) == 0) {
    if ((*param_3 >> 9 & 1) != 0) {
      uVar1 = (**(code **)(*param_1 + 0x70))(_DAT_140492c10,*param_4);
      (**(code **)(*param_1 + 0x78))(param_1,uVar1,&local_b8);
    }
  }
  else {
    (**(code **)(*param_1 + 0x78))(_DAT_140492c10,*(undefined4 *)*param_4,&local_b8);
  }
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1);
  lVar3 = FUN_14005ed80(local_78,uVar2,&local_b8);
  FUN_14041c530();
  if (0.0 <= *(float *)(lVar3 + 0x18) * *(float *)(lVar3 + 0x18) +
             *(float *)(lVar3 + 0x28) * *(float *)(lVar3 + 0x28)) {
    FUN_14041c530();
                    /* WARNING: Subroutine does not return */
    FUN_14041aa90();
  }
                    /* WARNING: Subroutine does not return */
  FUN_14041ade0();
}

