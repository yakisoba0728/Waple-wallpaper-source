// Function: FUN_1404ac3c0
// Addr: 1404ac3c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac3c0(undefined8 param_1,undefined2 param_2)

{
  undefined4 in_EAX;
  
  out(param_2,in_EAX);
  out(param_2,(char)in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

