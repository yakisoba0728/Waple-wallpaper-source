// Function: FUN_1404cf0c4
// Addr: 1404cf0c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf0c4(char *param_1,undefined8 param_2,char param_3)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  
  if (!SBORROW1((char)in_EAX,*(char *)CONCAT44(in_register_00000004,in_EAX))) {
    *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

