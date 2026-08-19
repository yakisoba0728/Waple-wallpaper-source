// Function: FUN_1404a2a5c
// Addr: 1404a2a5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2a5c(uint *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  uint in_EAX;
  undefined4 uVar3;
  undefined4 in_register_00000004;
  int *unaff_RSI;
  
  *param_1 = *param_1 | in_EAX;
  cVar2 = (char)in_EAX - *(char *)CONCAT44(in_register_00000004,in_EAX);
  uVar3 = CONCAT31((int3)(in_EAX >> 8),cVar2);
  cVar1 = *(char *)CONCAT44(in_register_00000004,uVar3);
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + cVar2;
  *unaff_RSI = *unaff_RSI +
               CONCAT22((short)((uint)param_2 >> 0x10),
                        CONCAT11((char)((uint)param_2 >> 8) + cVar1,(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

