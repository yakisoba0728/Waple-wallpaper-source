// Function: FUN_1404c7000
// Addr: 1404c7000
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7000(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  bool in_PF;
  
  if (!in_PF) {
    *(byte *)CONCAT44(in_register_00000004,in_EAX) =
         *(byte *)CONCAT44(in_register_00000004,in_EAX) ^ (byte)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(param_2,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

