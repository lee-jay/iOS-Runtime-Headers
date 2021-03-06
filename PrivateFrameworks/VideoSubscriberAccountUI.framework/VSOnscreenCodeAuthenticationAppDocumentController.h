/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSOnscreenCodeAuthenticationAppDocumentController : VSAppDocumentController <VSMessageQueueDelegate> {
    IKViewElement * _regenerateCodeButtonElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IKViewElement *regenerateCodeButtonElement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newViewModel;
- (id)_onscreenCodeViewModelWithViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (bool)_updateOnscreenCodeViewModel:(id)arg1 error:(id*)arg2;
- (bool)_updateOnscreenCodeViewModel:(id)arg1 withTemplate:(id)arg2;
- (bool)_updateViewModel:(id)arg1 error:(id*)arg2;
- (void)didAddMessagesToMessageQueue:(id)arg1;
- (id)regenerateCodeButtonElement;
- (void)setRegenerateCodeButtonElement:(id)arg1;

@end
