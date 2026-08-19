// Function: FUN_1404bf248
// Addr: 1404bf248
// Size: 1 bytes


void FUN_1404bf248(char *param_1,char *param_2)

{
  char *pcVar1;
  uint in_EAX;
  undefined4 uVar2;
  undefined4 in_register_00000004;
  char unaff_SPL;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar2 = CONCAT31((int3)(in_EAX >> 8),0x26);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar2) + 0x15);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + (char)param_1;
  *(char *)CONCAT44(in_register_00000004,uVar2) =
       *(char *)CONCAT44(in_register_00000004,uVar2) + '&';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

