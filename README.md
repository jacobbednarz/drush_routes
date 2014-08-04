# Drush routes

Because sometimes you just want to know where your Drupal routes go.

### Usage

```sh
$ drush routes

MODULE NAME                    PATH                                                              FILENAME
clientside_validation          admin/config/validation/clientside_validation/*/*/delete          clientside_validation.admin.inc
clientside_validation          clientside_validation/ajax                                        clientside_validation.module
clientside_validation          clientside_validation/captcha                                     clientside_validation.module
clientside_validation          clientside_validation/phone                                       clientside_validation.module
colorbox                       admin/config/media/colorbox                                       colorbox.admin.inc
context_ui                     admin/structure/context/settings                                  context_ui.module
context_ui                     context-ui/activate                                               context_ui.module
context_ui                     context-ui/deactivate                                             context_ui.module
countries                      admin/config/regional/countries                                   countries.admin.inc
```
  
### Installation

- Clone the repository into your `~/.drush` directory.
    
  ```sh
  $ git clone git@github.com:jacobbednarz/drush_routes.git ~/.drush
  ```
    
- Run a `drush cache-clear drush` to ensure the command is available and picked
  up.
  
### Contributing

Found a bug? Think that something can be improved? Open [an issue](https://github.com/jacobbednarz/drush_routes/issues) - bonus points for pull requests!
