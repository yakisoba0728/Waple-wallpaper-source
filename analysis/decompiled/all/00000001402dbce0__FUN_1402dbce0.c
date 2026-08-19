// Function: FUN_1402dbce0
// Addr: 1402dbce0
// Size: 223 bytes


longlong FUN_1402dbce0(uint param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  wchar_t *_Str1;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 auStackX_18 [2];
  
  do {
    if (param_3 == param_4) {
      lVar3 = 0;
code_r0x0001402dbdd2:
      FUN_1402d6370(0xe);
      auStackX_18[0] = 0;
      iVar1 = (*DAT_1404264a8)(&DAT_1405160d0,0x100,4,auStackX_18);
      if (iVar1 != 0) {
        lVar2 = lVar3;
        if (lVar3 == 0) {
          lVar2 = -1;
        }
        LOCK();
        (&DAT_1405160d0)[param_1] = lVar2;
        UNLOCK();
        iVar1 = (*DAT_1404264a8)(&DAT_1405160d0,0x100,2,auStackX_18);
        if (iVar1 != 0) {
          __acrt_unlock(0xe);
          return lVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402c98b4();
    }
    uVar4 = (ulonglong)*param_3;
    lVar3 = *(longlong *)(&DAT_1404e4d70 + uVar4 * 8);
    if (lVar3 == 0) {
      _Str1 = (wchar_t *)(&PTR_s__14042fa18_8_14042fa30)[uVar4];
      lVar3 = (*DAT_140426708)(_Str1,0,0x800);
      if ((lVar3 != 0) ||
         ((((iVar1 = (*DAT_1404266a8)(), iVar1 == 0x57 &&
            (iVar1 = wcsncmp(_Str1,L"api-ms-",7), iVar1 != 0)) &&
           (iVar1 = wcsncmp(_Str1,L"ext-ms-",7), iVar1 != 0)) &&
          (lVar3 = (*DAT_140426708)(_Str1,0,0), lVar3 != 0)))) {
        LOCK();
        lVar2 = *(longlong *)(&DAT_1404e4d70 + uVar4 * 8);
        *(longlong *)(&DAT_1404e4d70 + uVar4 * 8) = lVar3;
        UNLOCK();
        if (lVar2 != 0) {
          (*DAT_140426728)(lVar3);
        }
        goto UNWIND_INFO_1402dbe20_UnwindCodes_42__OffsetInProlog;
      }
      LOCK();
      *(undefined8 *)(&DAT_1404e4d70 + uVar4 * 8) = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (lVar3 != -1) {
UNWIND_INFO_1402dbe20_UnwindCodes_42__OffsetInProlog:
      lVar3 = (*DAT_140426730)(lVar3,param_2);
      goto code_r0x0001402dbdd2;
    }
    param_3 = param_3 + 1;
  } while( true );
}

