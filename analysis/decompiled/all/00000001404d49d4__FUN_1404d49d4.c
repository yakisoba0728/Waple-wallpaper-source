// Function: FUN_1404d49d4
// Addr: 1404d49d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d49d4(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  int in_EAX;
  char cVar2;
  byte unaff_R12B;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  if (0x7cfff90b < in_EAX) {
    *(char *)(param_1 + -0x13ffc284) = *(char *)(param_1 + -0x13ffc284) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_1 * 3) = *(char *)(param_1 * 3) + cVar2;
  bVar1 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  (&stack0x00000000)
  [(ulonglong)
   CONCAT31((int3)((uint)(in_EAX + -0xcffeeb8) >> 8),
            (char)(in_EAX + -0xcffeeb8) + '\b' + CARRY1(bVar1,unaff_R12B)) * 8] =
       (&stack0x00000000)
       [(ulonglong)
        CONCAT31((int3)((uint)(in_EAX + -0xcffeeb8) >> 8),
                 (char)(in_EAX + -0xcffeeb8) + '\b' + CARRY1(bVar1,unaff_R12B)) * 8] + (char)param_2
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

