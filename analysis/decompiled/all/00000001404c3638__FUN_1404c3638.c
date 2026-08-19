// Function: FUN_1404c3638
// Addr: 1404c3638
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3638(uint param_1)

{
  int in_EAX;
  undefined4 in_register_00000004;
  int unaff_EBX;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + unaff_EBX;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uRam00000000c2593647 = uRam00000000c2593647 | param_1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

