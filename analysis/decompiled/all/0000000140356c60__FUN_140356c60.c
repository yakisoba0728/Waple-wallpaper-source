// Function: FUN_140356c60
// Addr: 140356c60
// Size: 278 bytes


int FUN_140356c60(longlong param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  int local_res18 [2];
  
  if (param_3 != 0) {
    return 0x84;
  }
  if (*(char *)(param_1 + 0x79) == '\0') {
    return 0x9e;
  }
  lVar2 = param_1 + 0xa0;
  uVar3 = **(undefined8 **)(param_1 + 8);
  cVar6 = *(char *)(param_1 + 0x78);
  pcVar4 = *(code **)(param_1 + 0x90);
  if (cVar6 == '\0') {
    local_res18[0] = (**(code **)(param_1 + 0x80))(lVar2);
    cVar6 = '\x01';
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  if (*(char *)(param_1 + 0x79) != '\0') {
    pcVar5 = *(code **)(param_1 + 0x98);
    if (cVar6 == '\0') {
      (**(code **)(param_1 + 0x80))(lVar2);
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    (*pcVar5)(param_2,1,lVar2);
  }
  uVar7 = FUN_1402f80b0(uVar3,*(undefined4 *)(param_2 + 0x70),0,*(undefined4 *)(param_2 + 0x68),0,
                        local_res18);
  *(undefined8 *)(param_2 + 0x78) = uVar7;
  if (local_res18[0] == 0) {
    local_res18[0] = (*pcVar4)(param_2,lVar2);
    if (local_res18[0] == 0) {
      puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
      *puVar1 = *puVar1 | 1;
    }
    else {
      FUN_1402f7f90(uVar3,*(undefined8 *)(param_2 + 0x78));
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
  }
  return local_res18[0];
}

