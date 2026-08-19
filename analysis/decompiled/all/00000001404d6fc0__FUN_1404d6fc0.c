// Function: FUN_1404d6fc0
// Addr: 1404d6fc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6fc0(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  uint in_EAX;
  undefined4 in_register_00000004;
  char cVar4;
  byte *unaff_RBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  char unaff_R12B;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(uint *)CONCAT44(unaff_00000034,unaff_ESI) ^ unaff_ESI;
  pcVar2 = (char *)(param_1 + 0x6eb40036 + CONCAT44(unaff_00000034,unaff_ESI));
  *pcVar2 = *pcVar2 + cVar4;
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x64ffc9cf);
  *pcVar2 = *pcVar2 + (char)in_EAX;
  *(uint *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(uint *)CONCAT44(unaff_00000034,unaff_ESI) ^ unaff_ESI;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x1004d6e);
  *pcVar2 = *pcVar2 + cVar4;
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1 | in_EAX;
  *(uint *)(param_2 + 5) = *(uint *)(param_2 + 5) | (uint)param_2;
  bVar3 = *unaff_RBX;
  *unaff_RBX = *unaff_RBX << 1 | (char)bVar3 < '\0';
  if ((char)bVar3 < '\0' == (char)*unaff_RBX < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 - (char)param_1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

