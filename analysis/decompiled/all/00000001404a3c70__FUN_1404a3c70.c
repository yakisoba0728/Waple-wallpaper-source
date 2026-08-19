// Function: FUN_1404a3c70
// Addr: 1404a3c70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3c70(longlong param_1,longlong param_2,char *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint *in_RAX;
  undefined1 *puVar3;
  undefined2 *puVar4;
  char cVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  undefined2 in_ES;
  char cVar5;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar5 = (char)in_RAX + (char)*in_RAX;
  puVar3 = (undefined1 *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
  pcVar1 = puVar3 + 0x78000042;
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_3 = *param_3 + cVar5;
  uVar2 = *(undefined4 *)
           CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                    CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)param_2,*puVar3));
  cVar5 = (char)((uint)uVar2 >> 8) + (char)uVar2;
  puVar4 = (undefined2 *)
           (ulonglong)CONCAT22((short)((uint)uVar2 >> 0x10),CONCAT11(cVar5,(char)uVar2));
  *puVar4 = in_ES;
  pcVar1 = (char *)(unaff_RBP + param_1 * 4);
  *pcVar1 = *pcVar1 + cVar6;
  unaff_RSI[param_1 * 4] = unaff_RSI[param_1 * 4] + cVar5;
  pcVar1 = (char *)(unaff_RBX + param_2 * 4);
  *pcVar1 = *pcVar1 + cVar6;
  pcVar1 = (char *)(puVar4 + -0x177ffcae);
  *pcVar1 = *pcVar1 + (char)param_2;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

