// Function: FUN_1401df6f0
// Addr: 1401df6f0
// Size: 423 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_1401df6f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 local_e0 [8];
  undefined4 local_d8 [44];
  
  puVar5 = (undefined4 *)*param_4;
  uVar1 = *(undefined4 *)(param_1 + 0x150);
  uVar2 = *(undefined4 *)(param_1 + 0x15c);
  uVar3 = *(undefined4 *)(param_1 + 0x164);
  local_e0 = (undefined1  [8])0x0;
  local_d8[0] = 0;
  if (2 < DAT_140490478) {
    func_0x0001402cba34(L"(i) >= 0 && (i) < (this->length())",
                        L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec3.inl",0xac,
                        param_4,uVar1,uVar2,uVar3);
    return;
  }
  if (DAT_140490478 != 0) {
    if (DAT_140490478 == 1) {
      puVar4 = (undefined8 *)((longlong)local_e0 + 4);
      goto LAB_1401df83e;
    }
    if (DAT_140490478 == 2) {
      puVar4 = (undefined8 *)local_d8;
      goto LAB_1401df83e;
    }
  }
  puVar4 = (undefined8 *)local_e0;
LAB_1401df83e:
  *(undefined4 *)puVar4 = 0x3f800000;
  if (DAT_140490478 < 3) {
    if (DAT_140490478 != 0) {
      if (DAT_140490478 == 1) {
        puVar5 = puVar5 + 1;
      }
      else if (DAT_140490478 == 2) {
        puVar5 = puVar5 + 2;
      }
    }
    uVar1 = *puVar5;
    FUN_14041a3b0(uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_14041aa90(uVar1);
  }
  func_0x0001402cba34(L"(i) >= 0 && (i) < (this->length())",
                      L"D:\\dev\\we\\windows\\src\\lib\\include\\glm\\detail\\type_vec3.inl",0xac,
                      param_4,uVar1,uVar2,uVar3);
  return;
}

