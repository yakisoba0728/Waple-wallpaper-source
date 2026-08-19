// Function: FUN_1404bea4c
// Addr: 1404bea4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bea4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint in_EAX;
  byte unaff_BH;
  char unaff_SPL;
  
  uRam00000001a450ea54 = uRam00000001a450ea54 & in_EAX;
  pcVar1 = (char *)((ulonglong)
                    (CONCAT31((int3)(in_EAX >> 8),
                              (byte)in_EAX + unaff_BH + '&' + CARRY1((byte)in_EAX,unaff_BH)) |
                    0x2614f300) - 0x17);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

