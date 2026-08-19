// Function: FUN_14049ef80
// Addr: 14049ef80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ef80(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int in_EAX;
  
  LOCK();
  *param_3 = *param_3 + in_EAX;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

