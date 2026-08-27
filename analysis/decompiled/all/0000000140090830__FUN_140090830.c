// Function: FUN_140090830
// Addr: 140090830
// Size: 561 bytes


ulonglong FUN_140090830(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int local_58 [8];
  
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  do {
    cVar3 = FUN_14008e780(param_1,local_58);
    if (cVar3 == '\0') {
      uVar5 = *(ulonglong *)(param_1 + 0x48);
      while (uVar5 < uVar1) {
        if (*(ulonglong *)(param_1 + 0x38) <= uVar5 + 1) {
          FUN_140092fc0(param_1 + 0x28);
        }
        uVar6 = *(longlong *)(param_1 + 0x38) - 1;
        uVar5 = uVar6 & *(ulonglong *)(param_1 + 0x40);
        *(ulonglong *)(param_1 + 0x40) = uVar5;
        uVar5 = *(longlong *)(param_1 + 0x48) + uVar5;
        uVar6 = uVar6 & uVar5;
        if (*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar6 * 8) == 0) {
          uVar4 = FUN_14028af20(0x40);
          *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar6 * 8) = uVar4;
        }
        puVar2 = *(undefined8 **)
                  (*(longlong *)(param_1 + 0x30) + (*(longlong *)(param_1 + 0x38) - 1U & uVar5) * 8)
        ;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[7] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0xf;
        *(undefined1 *)(puVar2 + 3) = 0;
        uVar5 = *(longlong *)(param_1 + 0x48) + 1;
        *(ulonglong *)(param_1 + 0x48) = uVar5;
      }
      if (uVar5 != uVar1) {
        do {
          FUN_140017240(*(longlong *)
                         (*(longlong *)(param_1 + 0x30) +
                         (*(longlong *)(param_1 + 0x38) - 1U &
                         uVar5 + *(longlong *)(param_1 + 0x40) + -1) * 8) + 0x18);
          uVar5 = *(longlong *)(param_1 + 0x48) - 1;
          *(ulonglong *)(param_1 + 0x48) = uVar5;
          if (uVar5 == 0) {
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
        } while (uVar1 < uVar5);
      }
    }
  } while ((local_58[0] != param_2) && (local_58[0] != 0));
  uVar5 = *(ulonglong *)(param_1 + 0x48);
  while (uVar5 < uVar1) {
    if (*(ulonglong *)(param_1 + 0x38) <= *(longlong *)(param_1 + 0x48) + 1U) {
      FUN_140092fc0(param_1 + 0x28);
    }
    uVar6 = *(longlong *)(param_1 + 0x38) - 1;
    uVar5 = uVar6 & *(ulonglong *)(param_1 + 0x40);
    *(ulonglong *)(param_1 + 0x40) = uVar5;
    uVar5 = *(longlong *)(param_1 + 0x48) + uVar5;
    uVar6 = uVar6 & uVar5;
    if (*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar6 * 8) == 0) {
      uVar4 = FUN_14028af20(0x40);
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar6 * 8) = uVar4;
    }
    puVar2 = *(undefined8 **)
              (*(longlong *)(param_1 + 0x30) + (*(longlong *)(param_1 + 0x38) - 1U & uVar5) * 8);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[7] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0xf;
    *(undefined1 *)(puVar2 + 3) = 0;
    uVar5 = *(longlong *)(param_1 + 0x48) + 1;
    *(ulonglong *)(param_1 + 0x48) = uVar5;
  }
  if (uVar5 != uVar1) {
    do {
      FUN_140017240(*(longlong *)
                     (*(longlong *)(param_1 + 0x30) +
                     (*(longlong *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40) + -1 &
                     *(longlong *)(param_1 + 0x38) - 1U) * 8) + 0x18);
      uVar5 = *(longlong *)(param_1 + 0x48) - 1;
      *(ulonglong *)(param_1 + 0x48) = uVar5;
      if (uVar5 == 0) {
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
    } while (uVar1 < uVar5);
  }
  return uVar5 & 0xffffffffffffff00;
}

