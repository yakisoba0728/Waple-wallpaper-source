// Function: FUN_1404a8688
// Addr: 1404a8688
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8688(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined4 unaff_EBP;
  undefined1 *unaff_RSI;
  char *pcVar3;
  
  LOCK();
  uVar1 = *(undefined4 *)(unaff_RSI + 0xb);
  *(undefined4 *)(unaff_RSI + 0xb) = unaff_EBP;
  UNLOCK();
  *(char *)((longlong)in_RAX + 0x21004a85) = *(char *)((longlong)in_RAX + 0x21004a85) + unaff_BL;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar3 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x6e);
  *pcVar3 = *pcVar3 + (char)in_RAX;
  uVar2 = (uint)in_RAX | *in_RAX;
  pcVar3 = (char *)(ulonglong)uVar2;
  LOCK();
  *(undefined4 *)(unaff_RSI + 0xb) = uVar1;
  UNLOCK();
  pcVar3[0x21004a85] = pcVar3[0x21004a85] + unaff_BL;
  *pcVar3 = *pcVar3 + (char)uVar2;
  *pcVar3 = *pcVar3 + (char)param_2;
  out(*unaff_RSI,param_2);
  out(unaff_RSI[1],param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

