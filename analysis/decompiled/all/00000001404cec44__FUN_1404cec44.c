// Function: FUN_1404cec44
// Addr: 1404cec44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cec44(undefined8 param_1,uint *param_2)

{
  undefined1 *puVar1;
  int in_EAX;
  
  *param_2 = *param_2 | 0x21;
  puVar1 = (undefined1 *)((ulonglong)(in_EAX + 0xc0000234) + 0x3b);
  *puVar1 = *puVar1;
  *param_2 = *param_2 | 0xb2919;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

