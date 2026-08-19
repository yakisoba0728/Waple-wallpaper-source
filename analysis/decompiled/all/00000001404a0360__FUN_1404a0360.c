// Function: FUN_1404a0360
// Addr: 1404a0360
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0360(undefined8 param_1,char param_2)

{
  int in_EAX;
  char *unaff_RBX;
  
  cRam00000001b84a0697 = cRam00000001b84a0697 + param_2;
  uRam00000001144f0378 =
       uRam00000001144f0378 &
       CONCAT31((int3)((uint)(in_EAX + 0xb000dc4) >> 8),(char)(in_EAX + 0xb000dc4) - *unaff_RBX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

