// Function: FUN_1404d7b54
// Addr: 1404d7b54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7b54(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  uint *in_RAX;
  char cVar4;
  undefined6 uVar5;
  uint unaff_ESI;
  char unaff_R12B;
  int iVar2;
  char *pcVar3;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar4 = (char)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  iVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + cVar4);
  uVar1 = iVar2 + 0x85afffca;
  pcVar3 = (char *)(ulonglong)uVar1;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar3 = *pcVar3 + (char)uVar1;
  pcVar3[-0x49ffc9d3] = pcVar3[-0x49ffc9d3] + (char)(uVar1 >> 8);
  uVar1 = iVar2 - 0xcc006c;
  *param_1 = *param_1 + (char)uVar1;
  *(uint *)((ulonglong)uVar1 * 2) = *(uint *)((ulonglong)uVar1 * 2) | uVar1;
  *(uint *)CONCAT62(uVar5,CONCAT11(0x2d,cVar4)) =
       *(uint *)CONCAT62(uVar5,CONCAT11(0x2d,cVar4)) | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

