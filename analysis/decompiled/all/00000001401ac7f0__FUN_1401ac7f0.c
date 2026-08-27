// Function: FUN_1401ac7f0
// Addr: 1401ac7f0
// Size: 212 bytes


void FUN_1401ac7f0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (((char)param_2[2] == '\0') && (*(char *)((longlong)param_2 + 9) == '\0')) {
    uVar2 = 9;
  }
  else {
    uVar2 = 0;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1518) + 0x58))
                    (*(longlong **)(param_1 + 0x1518),"__font_atlas_",uVar2,*param_2,param_2[1],
                     *(undefined8 *)(param_2 + 4),0x20000008);
  *(undefined8 *)(param_2 + 6) = uVar2;
  if (*(longlong *)(param_2 + 10) != 0) {
    puVar1 = *(undefined8 **)(param_2 + 0xc);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1518) + 0x58))
                      (*(longlong **)(param_1 + 0x1518),"__font_atlas_color_",0,
                       param_2[0xe] * *param_2,param_2[0xe] * param_2[1],
                       *(undefined8 *)(param_2 + 10),0x20000008);
    *(undefined8 *)(param_2 + 0xc) = uVar2;
  }
  return;
}

