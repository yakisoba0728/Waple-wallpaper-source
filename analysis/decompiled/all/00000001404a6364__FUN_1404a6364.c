// Function: FUN_1404a6364
// Addr: 1404a6364
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6364(char *param_1)

{
  char cVar1;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined4 uVar3;
  undefined4 in_register_00000004;
  char unaff_SPL;
  char in_CF;
  uint uVar2;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  cVar1 = (char)in_EAX + '0' + in_CF;
  uVar2 = CONCAT31(uVar4,cVar1);
  *(uint *)CONCAT44(in_register_00000004,uVar2) =
       *(uint *)CONCAT44(in_register_00000004,uVar2) | uVar2;
  cVar1 = cVar1 + 'b';
  uVar3 = CONCAT31(uVar4,cVar1);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

