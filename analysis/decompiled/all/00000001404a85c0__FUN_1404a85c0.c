// Function: FUN_1404a85c0
// Addr: 1404a85c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a85ff) overlaps instruction at (ram,0x0001404a85fc)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a85ff) */

void FUN_1404a85c0(longlong param_1,uint *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int in_EAX;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RDI;
  longlong lStackX_8;
  
  cVar5 = (char)param_2;
  uVar3 = in_EAX + 0x10000454U | *(uint *)(longlong)(int)(in_EAX + 0x10000454U);
  uVar3 = uVar3 | *(uint *)(longlong)(int)uVar3;
  pbVar2 = (byte *)((longlong)param_2 + param_1 * 2 + 0x2100);
  *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar5;
  uVar3 = uVar3 | *(uint *)(longlong)(int)uVar3 |
          *(uint *)(longlong)(int)(uVar3 | *(uint *)(longlong)(int)uVar3);
  pbVar2 = (byte *)((longlong)param_2 + param_1 * 2 + 0x8120100);
  *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
  *(char *)param_2 = (char)*param_2 + cVar5;
  if ((char)*param_2 == '\0') {
    param_1 = param_1 + -1;
    pbVar2 = (byte *)((ulonglong)uVar3 * 9);
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
    *param_2 = *param_2 & (uint)param_1;
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                     CONCAT11((byte)(uVar3 >> 8) | *(byte *)(lStackX_8 + (ulonglong)uVar3),
                              (char)uVar3)) + 0x20000534;
    uVar3 = uVar3 | *(uint *)(ulonglong)uVar3;
    puVar4 = (uint *)(ulonglong)uVar3;
    *(char *)(unaff_RBP + 0x21004a) = *(char *)(unaff_RBP + 0x21004a) + (char)uVar3;
    *(char *)puVar4 = (char)*puVar4 + (char)uVar3;
    *(byte *)((longlong)puVar4 + 0xb) =
         *(byte *)((longlong)puVar4 + 0xb) & (byte)((ulonglong)param_1 >> 8);
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x68);
    *pcVar1 = *pcVar1 + unaff_BH;
    uVar3 = uVar3 | *puVar4;
    *(char *)(unaff_RBP + 0xf01004a) = *(char *)(unaff_RBP + 0xf01004a) + (byte)uVar3;
    *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
    *unaff_RDI = *unaff_RDI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)param_2 = (char)*param_2 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

