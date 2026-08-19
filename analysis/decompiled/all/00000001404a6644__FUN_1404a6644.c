// Function: FUN_1404a6644
// Addr: 1404a6644
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6644(longlong param_1,char *param_2)

{
  char cVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_SPL;
  longlong unaff_GS_OFFSET;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  cVar1 = (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
  out(0x6e,in_EAX);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
  *(char *)(unaff_GS_OFFSET + param_1) = *(char *)(unaff_GS_OFFSET + param_1) + unaff_SPL;
  *param_2 = *param_2 + cVar1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

