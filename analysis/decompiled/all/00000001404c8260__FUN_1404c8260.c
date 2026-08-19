// Function: FUN_1404c8260
// Addr: 1404c8260
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8260(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int in_EAX;
  char *pcVar3;
  char cVar4;
  char cVar5;
  undefined6 uVar6;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  
  uVar6 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar4 = (char)param_1;
  pcVar3 = (char *)(ulonglong)(in_EAX + 0x70000d34U);
  cVar2 = (char)(in_EAX + 0x70000d34U);
  cVar5 = (char)((ulonglong)param_1 >> 8) + cVar2;
  pcVar3[-0x7f] = pcVar3[-0x7f] + (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) =
       *(char *)CONCAT62(uVar6,CONCAT11(cVar5,cVar4)) + unaff_R12B;
  *pcVar3 = *pcVar3 + cVar4;
  *pcVar3 = *pcVar3 + cVar2;
  if (*pcVar3 != '\0') {
    *pcVar3 = *pcVar3 + cVar2;
    uVar1 = LocalDescriptorTableRegister();
    *(undefined4 *)(pcVar3 + in_FS_OFFSET) = uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

