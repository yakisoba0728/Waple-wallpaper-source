// Function: FUN_1404b6ee0
// Addr: 1404b6ee0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6ee0(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int in_EAX;
  char *pcVar3;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined4 *unaff_RDI;
  
  pcVar3 = (char *)((ulonglong)(in_EAX + 0x90000c34) | 0x1c);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x7ffe3f4);
  *pcVar1 = *pcVar1 + unaff_BL;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar3 = *pcVar3 + (byte)pcVar3;
  pcVar3[-0x64ffe3f4] = pcVar3[-0x64ffe3f4] + (char)param_2;
  uVar2 = in(param_2);
  unaff_RDI[1] = uVar2;
  *param_4 = *param_4 + ((byte)pcVar3 | 0x1c) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

